
#include<iostream>
#include<cmath>
int n,p,a,b,m,ans;
using namespace std;
struct Node{
	int l, r, w, max;//l,r分别代表左右断电，w代表区间和 
} tree[400001];//? 树开四倍空间

//对于二分到的每一个结点，给他的左右端点确定范围 
//如果是叶子结点，存储需要维护的信息 
//状态合并 
void Creat(int l, int r, int k)//建树 
{
	int m;
	tree[k].l = l;
	tree[k].r = r;
	if(l == r)//叶子结点
	{ cin>>m; tree[k].w = tree[k].max = m;  return;}//到了叶子结点就不需要再递归了 
	int mid = (l+r)/2;
	Creat(l, mid, k*2);//左孩子 
	Creat(mid+1, r, k*2+1);//右孩子 
	tree[k].w = tree[k*2].w + tree[k*2+1].w;//状态合并，此结点的w = 两个孩子的w之和 
	tree[k].max = max(tree[k*2].max, tree[k*2+1].max);
} 

//如果当前点是叶子结点，就是目标结点 
// 若 x<mid 递归左孩子 二分法类似 
void ask(int x, int k)//单点查询
{
	if(tree[k].l == tree[k].r) 
	{
		int ans = tree[k].w;
		return;
	 } 
	 int mid = (tree[k].l + tree[k].r)/2;
	 if(x <= mid) ask(x, k*2);
	 else ask(x, k*2 + 1);
} 

void point_change(int x, int y, int k)//单点修改 
{
    if(x==tree[k].l && x==tree[k].r)//找到目标位置 
    {
        tree[k].w = y;
        tree[k].max = y;
        return;
    }
    int mid = (tree[k].l+tree[k].r)/2;
    if(x <= mid) point_change(x, y, k*2);
    else point_change(x, y, k*2+1);
    tree[k].w = tree[k*2].w + tree[k*2+1].w;//所有包含结点k的结点状态更新 
    tree[k].max = max(tree[k*2].max , tree[k*2+1].max);
}

int sum(int x, int y, int k)//区间查询 
{
    if(tree[k].l==x && tree[k].r==y) 
    {
        return tree[k].w;
    }
    int mid = (tree[k].l + tree[k].r)/2;
    if(y <= mid) sum(x, y, k*2);
    else if(x > mid) sum(x, y, k*2+1);
    else return (sum(x, mid, k*2) + sum(mid+1, y, 2*k+1));
}

int find_max(int x, int y, int i)
{
	if(x == tree[i].l && y == tree[i].r) return tree[i].max;
	int mid = (tree[i].l + tree[i].r)/2;
	if(x>mid) return find_max(x, y, i*2+1);
	else if(y<=mid) return find_max(x, y, 2*i);
	else return max(find_max(x, mid, 2*i), find_max(mid+1, y, 2*i+1));
}

void show( int n)
{
	for(int i=1; i<n*4+1; i++)
	cout<<tree[i].l<<" "<<tree[i].r<<" "<<tree[i].w<<" "<<tree[i].max<<endl;
}
int main()
{
	int x, y;
	cin>>n>>m;
	Creat(1, n, 1);
	//show(n);
	for(int i=0; i<m; i++)
	{
		cin>>p>>x>>y;
		if(p == 1)
		{
			point_change(x, y, 1);
		}
		else if(p == 2)
		{
			cout<<sum(x, y, 1)<<endl;
		}
		else if(p == 3)
		{
			cout<<find_max(x, y, 1)<<endl;
		}
	//		show(n);
	}
	return 0;
 } 

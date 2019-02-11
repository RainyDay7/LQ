#include<iostream>
#include<algorithm>
using namespace std;
int n, p;
struct E{
	int x, y, d;//x,yÖ®¼äµÄ¾àÀëd 
}e[100005];
int f[100005];
bool cmp(E e1, E e2)
{
	return e1.d < e2.d;
}

int main()
{
	cin>>n>>p;
	int min = 100000;
	int v[10005];
	for(int i=1; i<=n; i++)
	{
		cin>>v[i]; 
		if(min > v[i])  min = v[i];
		f[i] = i; 
	}

	for(int i=1; i<=p; i++)
	{
		cin>>e[i].x>>e[i].y>>e[i].d;
		e[i].d = e[i].d *2 + v[ e[i].x ] + v[ e[i].y ];
	}
	sort(e+1, e+p+1, cmp );
	
	int sum = min;
	for(int i=1; i <= p; i++)
	{
		int f1 = f[e[i].x ], f2 = f[ e[i].y ];
		if(f1 != f2)
		{
			sum += e[i].d;
			f[f2] = f1;
			for(int j=1; j<=n; j++)
				if(f[j] == f2)
					f[j] = f1;
		}
	}
	cout<<sum;
}

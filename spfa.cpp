//spfa
#include<iostream>
#include<queue>

using namespace std;

const int MAXN = 20005;
const int MAXM = 200005;
const int INF = 100000;
int n, m, s=1;

struct node{
	int y, v, w, next;
};
node edge[MAXM];
int head[MAXN];
int spfa[MAXN];//最短路径长度 
queue<int> q;
bool inq[MAXN];//判断点是否在队列中 

void SPFA()
{
	q.push(s);
	inq[s] = true;
	for(int i=1; i<=n; i++) spfa[i] = INF;
	spfa[s] = 0;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		inq[u] = false;
		for(int i = head[u]; i>0; i=edge[i].next)
		{
			int v = edge[i].v;
			int w = edge[i].w;
			if(spfa[v] > spfa[u] + w)
			{
				spfa[v] = spfa[u] + w;
				if(!inq[v])
				{
					inq[v] = true;
					q.push(v);
				}
			}
		 } 
		
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1; i<=m; i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		edge[i] = (node){u, v, w, head[u]};
		head[u] = i;
	}
	SPFA();
	for(int i=2; i<=n; i++)
	{
		cout<<spfa[i]<<endl;
	}
	return 0;
}

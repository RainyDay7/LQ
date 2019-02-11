#include<iostream>
#include<vector>
using namespace std;

int dp[100010][2];
vector <vector<int> > v;

void dfs(int node, int pre)
{
	for(int i=0; i<v[node].size(); i++){
		int tem = v[node][i];
		if(tem != pre){
			dfs(tem, node);
			dp[node][0] += max(dp[tem][0], dp[tem][1]);
			dp[node][1] += dp[tem][0];
		}
	}
}
int main()
{
	int n, a, b;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>dp[i][1];
	v.resize(n+1);
	for(int i=1; i<=n-1; i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1, 0);
	//for(int i=0; i<n; i++)
	//	cout<<dp[i][0]<<" "<<dp[i][1]<<endl; 
	cout<< max(dp[1][0], dp[1][1]);	
	return 0;
} 

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, result; cin>>n;
	int a[101][101] = {0};
	for(int i=1; i<=n; i++)
		for(int j=1; j<=i; j++)
			cin>>a[i][j];
	for(int i=1; i<=n; i++)
		for(int j=1; j<=i; j++)
		{
			a[i][j] += max(a[i-1][j-1], a[i-1][j]);
			if(a[i][j]>result) result = a[i][j];
		}
	cout<<result;
	return 0;
 } 

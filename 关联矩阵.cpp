#include<iostream>
#include<string>
using namespace std;
int main()
{
	int arr[105][1005] = {0};
	int n, m, a, b;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		cin>>a>>b;
		arr[a-1][i] = 1;
		arr[b-1][i] = -1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}

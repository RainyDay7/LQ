#include<iostream>
using namespace std;

int main()
{
	int m, s, n;
	int a[205][205],b[205][205], c[205][205] = {0};
	cin>>m>>s>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<s; j++)
			cin>>a[i][j];
	for(int i=0; i<s; i++)
		for(int j=0; j<n; j++)
			cin>>b[i][j];
			
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<s; k++)
				c[i][j]  += a[i][k]*b[k][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}

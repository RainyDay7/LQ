#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	int m, n,i,j;
	cin>>n>>m;
	char a[26][26]; 
	
	for( i=0; i<m; i++)
		a[0][i] = 'A'+i; 

	for( i=1; i<n; i++){
		for( j=0; a[i-1][j-1] != 'A'&& j<m; j++)
			a[i][j] = a[i-1][j]+1;
	if(j<m)	a[i][j++] = 'A';
		for(; j<m; j++)
			a[i][j] = a[i-1][j]-1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			cout<<a[i][j];
			cout<<endl;
		}
	return 0;
}

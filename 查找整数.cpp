#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n; cin>>n;
	int *a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int p,i; cin>>p;
	for(i=0; i<n; i++) if(a[i] == p) break;
	if(i == n) cout<<"-1";
	else cout<<i+1;
	return 0;
}

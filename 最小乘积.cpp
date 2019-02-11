#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m; cin>>n; int a[10], b[10];
	int sum;
	for(int i=0; i<n; i++)
	{
		cin>>m;
		for(int j=0; j<m; j++) cin>>a[j];
		for(int j=0; j<m; j++) cin>>b[j];
		sort(a, a+m, less<int>());
		sort(b, b+m, greater<int>());
		sum = 0;
		for(int j=0; j<m; j++) sum += a[j]*b[j];
		cout<<sum<<endl;
	}
	
	return 0;
}

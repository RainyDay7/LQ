#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m, f, r, k; cin>>n;
	int *a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	for(int i=0; i<m; i++)
	{
		cin>>f>>r>>k;
		int *b = new int[n];
		for(int j=0; j<n; j++) b[j] = a[j];
		sort(b+f-1, b+r, greater<int>());	
		cout<<b[f-1+k-1]<<endl;
		delete[] b;
	}
	delete[]  a;
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, max = -9999, min=9999, plus=0; cin>>n;
	int *a = new int [n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		plus += a[i];
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
	cout<<max<<endl<<min<<endl<<plus<<endl;
	return 0;
}

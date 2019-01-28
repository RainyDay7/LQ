#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[3];
	for(int i=0; i<3; i++)
		cin>>a[i];
	sort(a,a+3, greater<int>());
	for(int i=0; i<3; i++)
		cout<<a[i]<<" ";
	return 0;
}

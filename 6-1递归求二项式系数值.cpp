#include<iostream>
using namespace std;

int cnk(int n, int k)
{
	if(n==k || k==0)
		return 1;
	return cnk(n-1, k) + cnk(n-1, k-1);
} 
int main()
{
	int k, n;
	cin>>k>>n;
	cout<<cnk(n, k);
	return 0;
}

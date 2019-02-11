#include<iostream>
using namespace std;

int SUM(int a[],  int n)
{
	int sum;
	for(int i=0; i<n; i++)
	  sum += a[i];
	return sum;
}

int main()
{
	int n; cin>>n;
	int *a = new int [n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int sum = SUM(a, n);
	int average = sum/n;
	cout<<sum<<" "<<average;
}

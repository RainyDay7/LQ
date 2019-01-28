#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=10000; i<=99999; i++)
	{
		int a1 = i/10000;
		int a2 = i/1000 % 10;
		int a3 = i/100 % 10;
		int a4 = i/10 % 10;
		int a5 = i%10;
		if(a1+a2+a3+a4+a5 != n) continue;
		if(a1 == a5 && a2==a4) cout<<i<<endl;
	}
	for(int i=100000; i<=999999; i++)
	{
		int a1 = i/100000;
		int a2 = i/10000 % 10;
		int a3 = i/1000 % 10;
		int a4 = i/100 % 10;
		int a5 = i/10 % 10;
		int a6 = i%10;
		if(a1+a2+a3+a4+a5+a6 != n) continue;
		if(a1 == a6 && a2==a5 && a3==a4) cout<<i<<endl;
	}
	return 0;
}

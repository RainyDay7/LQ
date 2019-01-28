#include<iostream>
using namespace std;
int main()
{
	for(int i=100; i<=999; i++)
	{
		int a1 = i/100;
		int a2 = i/10 % 10;
		int a3 = i % 10;
		if(a1*a1*a1 + a2*a2*a2 + a3*a3*a3 == i) cout<<i<<endl;
	}
	return 0;
}

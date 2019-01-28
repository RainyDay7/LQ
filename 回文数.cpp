#include<iostream>
using namespace std;
int main()
{
	for(int i=1000; i<=9999; i++)
	{
		int a1 = i/1000;
		int a2 = i/100 % 10;
		int a3 = i/10 % 10;
		int a4 = i % 10;
		if(a1 == a4 && a2==a3) cout<<i<<endl;
	}
	return 0;
}

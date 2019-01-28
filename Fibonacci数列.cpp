#include<iostream>
using namespace std;
int main()
{
	long int a=0, b=0;
	long int c=1;
	int n;
	cin>>n;
	for(int i=1; i<n; i++)
	{
		if(i%2)
		{
			a = c;
			c = (a+b) % 10007;
		}
		else{
			b = c;
			c = (a+b)%10007;
		} 
	
	}
	cout<<c%10007;
	return 0;
 } 

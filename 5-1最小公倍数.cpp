#include<iostream>
using namespace std;
int main()
{
	int a, b;
	__int64 c;
	cin>>a>>b;
	for( c=1; ;c++){
		if(c%a==0 && c%b==0)
			break;
	}
	cout<<c;
	return 0;
}

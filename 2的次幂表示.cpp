#include<iostream>
using namespace std;
int a[15]={1,2,4,8,16,32,64,128,256,516,1024,2048,4096,8192,16384};
void two(int n)
{
	int i;
	if(n==0) {cout<<"0"; return;}
	if(n==1) {cout<<"2(0)"; return;}
	if(n==2) {cout<<"2";return;}
	for(i=14; i>=0; i--)
		if(a[i] <= n)
		{
			n -= a[i];
			if(i == 1) cout<<"2";
			else {
			cout<<"2(";
			two(i);
			cout<<")";
			}
			if(n!=0) cout<<"+";
		}
}

int main()
{
	int n; cin>>n;
	two(n);
	return 0;
}

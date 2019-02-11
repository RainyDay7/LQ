#include<iostream>
#include<algorithm>
using namespace std;
int paidui(int m,int n)//递归 
{
 if(m<n) return 0;//出口1：借者多于还者，0种方案 
 if(n==0) return 1;//出口2：借者为0人，1种方案 
 return paidui(m-1,n)+paidui(m,n-1);
}
int main()
{
	int m, n;
	cin>>m>>n;
	cout<<paidui(m,n);
	return 0;
 } 

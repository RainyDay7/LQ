#include<iostream>
#include<algorithm>
using namespace std;
int paidui(int m,int n)//�ݹ� 
{
 if(m<n) return 0;//����1�����߶��ڻ��ߣ�0�ַ��� 
 if(n==0) return 1;//����2������Ϊ0�ˣ�1�ַ��� 
 return paidui(m-1,n)+paidui(m,n-1);
}
int main()
{
	int m, n;
	cin>>m>>n;
	cout<<paidui(m,n);
	return 0;
 } 

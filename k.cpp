#include<iostream>
using namespace std;
//二位四进制中4好数的数目 
int main()
{
	__int64 sum=0;
	int k, l;
	cin>>k>>l;
	int a[105][105] = {0};
	for(int i=0; i<k; i++)
		a[0][i] = 1;
	for(int i=1; i<l; i++)
		for(int j=0; j<k; j++)
			for(int t=0; t<k; t++)
				if(t!=j-1 && t!=j+1) //不相邻 
				{
					a[i][j] += a[i-1] [t];
					a[i][j] %= 1000000007;
				} 
	for(int i=1; i<k; i++){
		sum += a[l-1][i];
		sum %= 1000000007;
	} 
	cout<<sum;
	return 0;
 } 

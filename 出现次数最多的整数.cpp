#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	
	int n, k, i; cin>>n;
	if(n>0 && n<21){
	int a[2][25] = {0};
	cin>>a[1][0]; a[0][0] = 1;
	
	for(i=1; i<n; i++)
	{
		cin>>k;
		if(k == a[1][i-1]) {
			i--; n--;
			a[0][i]++;
		}
		else {
			a[1][i] = k;
			a[0][i] = 1;
		}
	}
	
	int max = a[0][0], flag=0;
	
	for(int j=0; j<n; j++)
	{
		if(max < a[0][j])
		{
			max = a[0][j];
			flag = j;
		} 
		else if(max == a[0][j])
		{
			if(a[1][flag] > a[1][j])
				flag = j;
		}
	}
	cout<<a[1][flag];
}
	return 0;
 } 

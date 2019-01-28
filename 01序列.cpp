#include<iostream>
#include<vector>
using namespace std;

void plus1(int a[])
{
	for(int i=4; i>=0; i--)
		if(a[i] == 2)
		{
			a[i] = 0;
			a[i-1]++;
		}
}
int main()
{
	int *a = new int[5];
	for(int i=0; i<5; i++) {
		a[i] = 0;
		cout<<a[i];
	}cout<<endl;
	for(int i=0; i<31; i++)
	{
		a[4]++;
		plus1(a);
		for(int j=0; j<5; j++)
		{
			cout<<a[j]; 
		} 
		cout<<endl;
	}
	return 0;
}

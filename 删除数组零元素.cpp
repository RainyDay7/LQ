#include<iostream>
using namespace std;

void CompactIntergers(int &n, int a[])
{
	for(int i=0; i<n; i++)
	{
		if(a[i] == 0)
		{
			n--;
			for(int j=i; j<n; j++)
				a[j] = a[j+1];
			i--;
		}
	}
} 

int main()
{
	int n, a[1000]; cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	CompactIntergers(n, a);
	cout<<n<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";	
}

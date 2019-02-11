#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	map<int, int, greater<int> > m;
	int n; cin>>n;
	int a;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		m.insert(make_pair(a, i));
	}
	map<int, int>::iterator it = m.begin();
	cout<<(*it).first<<" "<<(*it).second; 
	return 0;
 } 

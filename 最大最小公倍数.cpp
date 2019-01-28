#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	__int64 n; cin>>n;
	__int64 max;
	if(n<3) max = n;
	else{
	if(n%2)//奇数
		 max = n * (n-1) * (n-2);
	else if(n%3==0) max = (n-1) * (n-2) * (n-3);//能被3整除 
	else max = n * (n-1) *(n-3);
}
	cout<<max; 
 	return 0;
}

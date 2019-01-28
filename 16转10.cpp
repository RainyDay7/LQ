#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string a; 
	__int64 result = 0;
	cin>>a;
	for(int i=0;  a[i] != '\0'; i++)
 		{
 			if(a[i]<=57)
 				result  = result*16 + a[i]-48;
 			else
 				result  = result*16 + a[i]-55;
		 }
	cout<<result;
	
	
	return 0; 	
} 

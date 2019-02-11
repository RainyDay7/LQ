#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
int sushu(int n)
{

    int i;
    int flag=1;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
        	flag=0;
        	break;
        }
	}
    return flag;
}
int main()
{

    int i,n;
    int flag;
    int result = 1;
    int count=0;
    cin>>n;
    for(i=2;count<n;i++)
    {
        flag = sushu(i);
        if(flag)
        {
            result = (result * i)%50000;
            count++;
        }
    }
    cout<<result;

    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
struct  fushu{
	double shi;
	double xu;
};

fushu add(fushu a, fushu b)
{
	fushu c;
	c.shi =  a.shi+b.shi;
	c.xu = a.xu+b.xu;
	return (c);
}
fushu sub(fushu a, fushu b)
{
	fushu c;
	c.shi =  a.shi-b.shi;
	c.xu = a.xu-b.xu;
	return (c);
}
fushu mul(fushu a, fushu b)
{
	fushu c;
	c.shi =  a.shi*b.shi-a.xu*b.xu;
	c.xu = a.xu*b.shi+a.shi*b.xu;
	return (c);
}
fushu chu(fushu a, fushu b)
{
	double k = b.xu*b.xu + b.shi*b.shi;
	fushu c;
	c.shi =  (a.shi*b.shi+a.xu*b.xu)/k;
	c.xu = (a.xu*b.shi-a.shi*b.xu)/k;
	return (c);
}
int main()
{
	fushu a, b, t;
	char c;
	cin>>c;
	cin>>a.shi>>a.xu>>b.shi>>b.xu;
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	switch(c)
	{
		case '+': t = add(a, b); cout<<t.shi<<"+"<<t.xu<<"i";break;
		case '-': t = sub(a, b);cout<<t.shi<<"+"<<t.xu<<"i";break;
		case '*': t = mul(a, b);cout<<t.shi<<"+"<<t.xu<<"i";break;
		case '/': t = chu(a, b);cout<<t.shi<<"+"<<t.xu<<"i";break;		
	}
	return 0;
 } 

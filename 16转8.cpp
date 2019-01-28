#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l,b[400000],c,x;//用来存储所转化的2进制数
    stack <int> s;
    char a[100000];//用来存储输入的16进制数
    cin>>n;
    while(n!=0)
    {
        l=0;
        scanf("%s",a);
        for(int i=strlen(a)-1;i>=0;i--)//将输入的16进制数转化为2进制数，这里我先转化成10进制数 在转化为2进制数。
        {
             if(a[i]>='A'&&a[i]<='F')
                   x=a[i]-'A'+10;//当所输入为A~F时，所输入字母减去A再加上10 便是所表示的10进制数。
                else   x=a[i]-48;//当输入为0~9时直接减去48或'0'就是相应的整数。
            for(int j=0;j<4;j++)//通过8421码我们知道16进制的每个数需用4位2进制数表示所以进行4次循环。
            {
                c=x%2;
                x=x/2;
                b[l++]=c;
            }
        }
        int k=-1;//k用来表示几次幂，和间接计数位数。
        int sum=0;
        for(int i=0;i<l;i++)
        {
            k++;
            sum+=b[i]*pow(2,k);
            if(k==2||i==l-1&&sum!=0)//再将b数组3个3个按序分组，这里的（i==l-1&&sum!=0）是为了判断是否为尾元素且不满三位并且防止输出前导零。之前一直不通过就是这个条件写的不对。
            {
                k=-1;
                s.push(sum);//用栈存储所转化的8进制。
                sum=0;
            }
        }
        while(s.empty()!=true)
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
        n--;
    }
    return 0;
}

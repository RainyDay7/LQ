#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l,b[400000],c,x;//�����洢��ת����2������
    stack <int> s;
    char a[100000];//�����洢�����16������
    cin>>n;
    while(n!=0)
    {
        l=0;
        scanf("%s",a);
        for(int i=strlen(a)-1;i>=0;i--)//�������16������ת��Ϊ2����������������ת����10������ ��ת��Ϊ2��������
        {
             if(a[i]>='A'&&a[i]<='F')
                   x=a[i]-'A'+10;//��������ΪA~Fʱ����������ĸ��ȥA�ټ���10 ��������ʾ��10��������
                else   x=a[i]-48;//������Ϊ0~9ʱֱ�Ӽ�ȥ48��'0'������Ӧ��������
            for(int j=0;j<4;j++)//ͨ��8421������֪��16���Ƶ�ÿ��������4λ2��������ʾ���Խ���4��ѭ����
            {
                c=x%2;
                x=x/2;
                b[l++]=c;
            }
        }
        int k=-1;//k������ʾ�����ݣ��ͼ�Ӽ���λ����
        int sum=0;
        for(int i=0;i<l;i++)
        {
            k++;
            sum+=b[i]*pow(2,k);
            if(k==2||i==l-1&&sum!=0)//�ٽ�b����3��3��������飬����ģ�i==l-1&&sum!=0����Ϊ���ж��Ƿ�ΪβԪ���Ҳ�����λ���ҷ�ֹ���ǰ���㡣֮ǰһֱ��ͨ�������������д�Ĳ��ԡ�
            {
                k=-1;
                s.push(sum);//��ջ�洢��ת����8���ơ�
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

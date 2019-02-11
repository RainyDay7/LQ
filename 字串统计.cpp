#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	int n; cin>>n;
	string s, s1, s2, sub;
	cin>>s;
	int len = s.length();
	int cnt=0, max=0;
	for(int i=n; i<=len; i++){
		for(int j=0; j+i<=len; j++){
			cnt = 0;  
			s1 = s.substr(j, i);
			for(int k=0; k+i<=len; k++){
				s2 = s.substr(k, i);
				if(s1 == s2)
					cnt++;		
			}
			if(cnt > max)
			{
				sub = s1;
				max = cnt;
			}
			else if(cnt == max && s1.length() > sub.length())
				sub = s1;
		}
	}
	cout<<sub<<endl;
	return 0;
 } 

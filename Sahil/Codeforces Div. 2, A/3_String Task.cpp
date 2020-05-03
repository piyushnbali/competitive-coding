#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

	string s;
	
	cin>>s;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y'&& s[i]!='y')
		{
			if(s[i]>=65 && s[i]<=90)
			{
				s[i]+=32;
				cout<<"."<<s[i];
			}
			else
			cout<<"."<<s[i];
				
		}
	
	}

	
	
	return 0;
}


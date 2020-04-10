#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{

	string s,a;
	cin>>s>>a;
	
	for(int i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		{
			s[i]=tolower(s[i]);
		}
		
		if(isupper(a[i]))
		{
			a[i]=tolower(a[i]);
		}
	}
	
	if(s==a)
	cout<<"0";
	else if(s<a)
	cout<<"-1";
	else
	cout<<"1";
	
	return 0;
}


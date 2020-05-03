#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int i;
	string s;
	cin>>s;
	string a;
	for(i=0;i<s.size();i+=2)
	{
		a.push_back(s[i]);
	}
	
	sort(a.begin(),a.end());
	
	for(i=0;i<s.size();i+=2)
	{
		s[i]=a[i/2];	
	}
	cout<<s;

	
	return 0;
}


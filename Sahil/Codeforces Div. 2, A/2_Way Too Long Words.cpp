#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void printAbr(string s)
{
	if(s.length()<=10)
	cout<<s;
	else
	{
		cout<<s[0]<<s.length()-2<<s[s.length()-1];
	}
	
	
}


int main()
{
	int n;
	
	cin>>n;
	
	while(n>0)
	{
		string s;
		
		cin>>s;
		
		printAbr(s);
		
		cout<<endl;
		
		
		n--;
	}

	
	
	return 0;
}


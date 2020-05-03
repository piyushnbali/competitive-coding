#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

bool check(string s)
{
	int n=s.size(),m;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='h')
		{
			for(int j=i+1;j<n;j++)
			{
				if(s[j]=='e')
				{
					for(int k=j+1;k<n;k++)
					{
						if(s[k]=='l')
						{
							for(int l=k+1;l<n;l++)
							{
								if(s[l]=='l')
								{
									for(m=l+1;m<n;m++)
									{
										if(s[m]=='o')
										return 1;
									}
									if(m==n)
									return 0;
								}
							}
						}
					}
				}
			}
		}
		
	}
	
	return 0;
	
}


int main()
{
	string s;
	cin>>s;
	
	int ans=check(s);
	
	if(ans==1)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	
	
	
	return 0;
}


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int arr[]={4,7,47,44,74,77,444,447,474,477,744,774,747,777};
	int n=sizeof(arr)/sizeof(arr[0]);

	int num,i=0;
	cin>>num;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<=num)
		{
			
			if((num%arr[i])==0)
		{
			cout<<"YES";
			break;
		}
		
		}
		
	}
	
	if(i==n)
	cout<<"NO";
	
	
	
	return 0;
}


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	
	int arr[n];
	int temp[n];
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		temp[arr[i]-1]=i+1;
	}
	
	for(i=0;i<n;i++)
	cout<<temp[i]<<" ";
	
	return 0;
}


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
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	int min=101,max=-1;
	int minIdx,maxIdx;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<=min)
		{
			min=arr[i];
			minIdx=i;
			
		}
		
	}

	
	for(i=n-1;i>=0;i--)
	{
		if(arr[i]>=max)
		{
			max=arr[i];
			maxIdx=i;
		}
	}
	
		
	if(maxIdx==minIdx)
	cout<<0;
	else if(maxIdx>minIdx)
	cout<<n-2-minIdx+maxIdx;
	else
	cout<<n-1-minIdx+maxIdx;
	
	return 0;
}


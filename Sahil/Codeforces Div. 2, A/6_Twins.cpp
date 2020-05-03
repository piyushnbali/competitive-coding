#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	sort(arr,arr+n,greater<int>());
	
	
	int mySum=0,hisSum=0,count=0;
	for(i=0;i<n;i++)
	{
		hisSum=0;
		mySum+=arr[i];
		
		for(j=i+1;j<n;j++)
		hisSum+=arr[j];
		
		count++;
		
		if(mySum>hisSum)
		break;
	}
	
	cout<<count;
	
	return 0;
}


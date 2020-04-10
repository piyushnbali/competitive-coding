#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int arr[5][5],i,j,k,l;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>arr[i][j];
			
			if(arr[i][j]==1)
			{
				k=i;
				l=j;
			}
		}
	}
	
	if((2-k)>=0)
	k=2-k;
	else
	k=k-2;
	
	if((2-l)>=0)
	k=2-l;
	else
	l=l-2;
	
	cout<<k+l;
	
	return 0;
}


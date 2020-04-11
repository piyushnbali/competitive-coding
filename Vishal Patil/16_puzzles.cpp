#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	// your code goes here
	int n,m,a[50],i,m1[50],min;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(i=0;i<m-n+1;i++)
    {
        m1[i]=a[i+n-1]-a[i];
    }
    min=m1[0];
    for(i=0;i<m-n+1;i++)
    {
        if(min>m1[i])
        {
            min=m1[i];
        }
    }
    cout<<min<<endl;
    
    return 0;
}
 

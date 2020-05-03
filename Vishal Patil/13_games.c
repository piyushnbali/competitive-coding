#include <stdio.h>

int main(void) 
{
	// your code goes here
	int t,i,a[30][2],j,v;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&a[i][0],&a[i][1]);
	}
	v=0;
	for(i=0;i<t;i++)
	{
	    for(j=0;j<t;j++)
	    {
	        if(a[i][0]==a[j][1]&&a[i][1]==a[j][0])
	        {
	            v+=2;
	        }
	        else if(a[i][0]==a[j][1])
	        {
	            v++;
	        }
	        else if(a[i][1]==a[j][0])
	        {
	            v++;
	        }
	    }
	}
	printf("%d\n",v/2);
		return 0;
}
 

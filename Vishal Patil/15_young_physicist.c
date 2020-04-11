#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,a[100][3],sumx,sumy,sumz;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	sumx=0;sumy=0;sumz=0;
	for(i=0;i<t;i++)
	{
	    sumx+=a[i][0];
	    sumy+=a[i][1];
	    sumz+=a[i][2];
	}
	if(sumx==0&&sumy==0&&sumz==0)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
		return 0;
}
 

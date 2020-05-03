#include <stdio.h>

int main(void) 
{
	// your code goes here
	int a,b,c,i,max,a1[6];
    scanf("%d%d%d",&a,&b,&c);
    a1[0]=a+b*c;
    a1[1]=a*b+c;
    a1[2]=a*(b+c);
    a1[3]=(a+b)*c;
    a1[4]=a*b*c;
    a1[5]=a+b+c;
    max=a1[0];
    for(i=0;i<6;i++)
    {
        if(max<a1[i])
        {
            max=a1[i];
        }
    }
    printf("%d",max);
		return 0;
}
 

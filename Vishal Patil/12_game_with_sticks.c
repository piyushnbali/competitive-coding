#include <stdio.h>
 
int main(void) 
{
	// your code goes here
	int a,b,c;
    scanf("%d%d",&a,&b);
    c=a*b;
    if(a>=b)
    {
        if((c/a)%2==0)
        {
            printf("Malvika\n");
        }
        else
        {
            printf("Akshat\n");
        }
        
    }
    else
    {
        if((c/b)%2==0)
        {
            printf("Malvika\n");
        }
        else
        {
            printf("Akshat\n");
        }
    }
		return 0;
}

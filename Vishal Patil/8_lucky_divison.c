#include<stdio.h>
int fun(int n)
{
    int i,k,m;
    m=0;
    for(i=0;n>0;i++)
    {
        k=n%10;
        n=n/10;
        if(k==4||k==7)
        {
            m++;

        }
    }
    if(m==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int t,i,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
    {
        if(t%i==0)
        {
            j=fun(i);
        }
        if(j==1)
        {
            break;
        }
    }
    if(j==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}

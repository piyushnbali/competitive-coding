#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,v;
    char a[100],cm,b[100];
    scanf("%s",a);
    j=0;
    if(a[1]!='\0')
    {
        for(i=0;a[i]!='\0';i++)
     {
        cm=a[i];
        if(a[i]!=a[1])
        {
            b[j]=a[i];
       //i++;
        j++;

        }
    }
    }
   //printf("%d\n",j);

    if(j==0)
    {
        printf("%s",a);
    }
    else
    {
        sort(b,b+j);
        for(v=0;v<j;v++)
        {
            printf("%c",b[v]);
            if(v!=j-1)
            {
                printf("+");
            }
        }
    }



}

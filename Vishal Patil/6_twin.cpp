#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,i,sum,m,v,a[100];
   cin>>t;
   sum=0;
   for(i=0;i<t;i++)
   {
       scanf("%d",&a[i]);
       sum+=a[i];
   }
  // printf("%d\n",sum);
   sort(a,a+t);
   
   int vj=1+(sum/2);
   //printf("%d\n",vi);
   m=0;
   v=0;
   for(i=t-1;i>=0;i--)
   {
       v+=a[i];
       if(v<vj)
       {
           m++;
       }
       else
       {
           break;
       }
   }
   printf("%d\n",m+1);
}

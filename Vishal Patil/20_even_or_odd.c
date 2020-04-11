#include <stdio.h>

int main(void)
{
	// your code goes here
	long long int a,b;
   scanf("%lld%lld",&a,&b);
   if(a%2==0)
   {
       if(b<=a/2)
       {
           printf("%lld\n",2*b-1);
       }
       else
       {
           printf("%lld\n",2*(b-a/2));
       }
   }
   else
   {
       if(b<=1+a/2)
       {
           printf("%lld\n",2*b-1);
       }
       else
       {
           printf("%lld\n",2*(-1+b-a/2));
       }
       
   }
    
		return 0;
}
 

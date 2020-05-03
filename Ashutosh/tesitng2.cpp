#include<iostream>
using namespace std;


int findHourGlassSum(int arr[7][7], int r, int c)
{
	       int sum=0, i;
           for (i = c ; i < (c+3) ; i++)
           {  sum = sum + arr[r][i];
	       }
	        r++;
	        c++;
	       sum = sum + arr[r][c];
	       r++;
	       c--;
	       for (i = c ; i < (c+3) ; i++)
           {  sum = sum + arr[r][i];
	       }
	       return sum; 
}
int main()
{

 int arr[7][7], r, c, sum[16], i,z=0;
   for (r =1 ; r<7 ; r++)
   {      for(c=1 ; c<7 ; c++)
         {  cin >> arr[r][c];
		 }
   }
 
   
 /*  for (r =1 ; r<7 ; r++)
   {      for(c=1 ; c<7 ; c++)
         {  cout << arr[r][c];
            cout << " ";
		 }
		 cout <<"\n";
		 
   }
   */
for (r=1 ; r <=4 ; r++)
{   for (c=1 ; c<=4 ; c++)
    {

           sum[z] = findHourGlassSum(arr, r, c)   ;   
           z++;
		   
   }
}
    
    for(i=0 ; i<16 ; i++)
    {  cout << sum[i];
       cout << " ";
	}
    
    int max;
    max = sum[0];
    for (i=1 ; i<16 ; i++)
    {    if (sum[i]> max)
         max = sum[i]; 
	}
	cout<<"The max value of sum is "<<max;
   
}

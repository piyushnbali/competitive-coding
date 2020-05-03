// God is Great
/* Piyush Bali:- WHY SOMETHING IS IMPOSSIBLE?
*/ 
#include<bits/stdc++.h>
 
using namespace std;
int findincol(int hand[10][10],int value)
{
    for(int i=0 ;i<10;i++)
    {
        if(hand[i][0]==value)
        {
            return i;
        }
    }
    return -1;
}
void findinrow(int hand[10][10],int value,int q)
{
    if(q==-1)
    {
        return;
    }
    for(int i=0;i<10;i++)
    {    //cout<<hand[q][i]<<"dsf";
        if(hand[q][i]==value)
        {
            hand[q][i]=0;
        }
    }
}
int main()
{
 long long n;
 int a,b,ans=0;
 int q;
 
 cin>>n;
 int hand[10][10]={0};
 for(int i=0;i<10;i++)
 {   cin>>a;
    hand[i][0]=a;
    // cout<<a;
     for(int j=1;j<10;j++)
     {
         cin>>b;
          hand[i][j]=b;
 
     }
     //cout<<"\n";
 }
 for(int i=0;i<10;i++)
 {   
    a=hand[i][0];
    // cout<<a;
     for(int j=1;j<10;j++)
     {
        
         b=hand[i][j];
         //cout<<b<<a<<" ";
         q=findincol(hand,b);
         //cout<<q<<"\n";
         findinrow(hand,a,q);
         
 
     }
     //cout<<"\n";
 }
 //cout<<ans;
 for(int i=0;i<10;i++)
 {
     for(int j=0;j<10;j++)
     {
        //cout<<hand[i][j]<<" ";
         if(hand[i][j]!=0)
         {
             ans++;
         }
     }
     cout<<"\n";
 }
 cout<<n*(n-1)/2-(ans-10);
 
}
 
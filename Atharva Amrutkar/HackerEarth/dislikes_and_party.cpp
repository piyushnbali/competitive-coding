#include<stdio.h>
int main(void)
{
  int count=0,count1=0,h;
  int a[100][100];
  long long int b,fac=1,fac1=1,x,ans;
  scanf("%lld",&b);
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  
  for(int i=0;i<10;i++)
  {
    for(int j=1;j<10;j++)
    {
      for(h=i+1;h<10;h++)
      {
      if(a[i][j]==a[h][0])
      {
        for(long long int temp=1;temp<10;temp++)
        {
          if(a[h][temp]==a[i][0])
          {
          a[h][temp]=-1000;
          count1++;
          break;
          }
        }
        if(count1>0)
        break;
      }
      }
    }
  }
  for(int i=0;i<10;i++)
  {
    for(int j=1;j<10;j++)
    {
      if(a[i][j]!=-1000)
      {
        count++;
      }
    }
  }
  ans=(b*(b-1))/2;
  ans-=count;
    printf("%lld",ans);
  return 0;
}

#include<stdio.h>
void main()
{
int i,j,n,trac=0;
int d,m;
double c;
printf("enter the order of matrix");
scanf("%d",&n);
int a[n][n];
printf("enter the elements of n x n matrix");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
 }
 printf("matrix \n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
}
 d=(a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])))-(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
printf("%d\n",d);
for(i=0;i<n;i++)
{
    trac=trac+a[i][i];
 }
 printf("%d",trac);
 m=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))+((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
 printf("\n%d",m);
for(c=0.0;i<10.0;c++)
{
    if(c*c*c-trac*c*c+m*c-d==0)
    {
        printf("\n%f",c);

    }
}
}

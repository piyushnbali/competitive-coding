#include <stdio.h>

int main(void)
{
	// your code goes here
    int i,j,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                printf("%d\n",abs(2-i)+abs(2-j));
            }
        }
    }
    
		return 0;
}
 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100

int main()
{
    int n,L[max],A[max],j=0,i=0 ;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int p=2;p<=n;p++)
    {
        A[p]=p;
    }
    for(int p=2;p<=sqrt(n);p++)
    {
        if(A[p]!=0)
        {
            j=p*p;
            while(j<=n)
            {
                A[j]=0;
                j=j+p;
            }
        }

    }
    for(int p=2;p<=n;p++)
    {
        if(A[p]!=0)
        {
            L[i]=A[p];
            i=i+1;
        }
    }
     for(int p=0;p<i;p++)
     {
            printf("%d\t",L[p]);
     }

    return 0;
}

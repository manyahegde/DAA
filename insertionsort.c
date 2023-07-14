#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,v,a[10];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        v=a[i];
        j=i-1;
        while (j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=v;
    }
    printf("sorted array:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}





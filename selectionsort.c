#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,i,j,n,a[5],min;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("\nenter the numbers:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i =0; i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                min=j;
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("sorted array:");
    for(int i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}

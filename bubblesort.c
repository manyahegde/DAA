#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, n,i,j,a[10];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

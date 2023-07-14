#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[20],key;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("\nenter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nenter they key element");
    scanf("%d",&key);
    i=0;
    while (i<=n && a[i]!=key)
    {
        i=i+1;
    }
    if (i<=n)
    {
        printf("%d is found at %d",key,i);
        exit(0);
    }
    printf("not found");
    return 0;
}

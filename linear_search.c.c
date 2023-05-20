#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, key, a[10], i, pos;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the values of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element to search\n");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        pos=i;
        if(a[i]==key)
        {
            printf("%d is found in position %d\n",key,pos);
            exit(0);
        }

    }
    printf("not found\n");
    return 0;
}

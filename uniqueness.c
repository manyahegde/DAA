#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n;
    printf("enter the array size:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<=n-2;i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(a[i]==a[j])
            {
                printf("not unique\n");
                exit(0);
            }
        }
    }
    printf("unique\n");
    return 0;
}

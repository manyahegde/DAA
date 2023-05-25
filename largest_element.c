#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],max,n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("largest number in the given list is %d\n",max);

    return 0;
}

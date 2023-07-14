#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[], int low, int high, int key)
{
    int mid;
    if(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            return binarysearch(arr,low,mid-1,key);
        }
        else
        {
            return binarysearch(arr,mid+1,high,key);
        }
    }
    return -1;
}
int main()
{
    int n,key,a[10],res;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element:");
    scanf("%d",&key);
    res=binarysearch(a,0,n-1,key);
    printf("the key element is found at %d",res);
    return 0;
}

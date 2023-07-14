#include <stdio.h>
#include <stdlib.h>
int HoarePartition(int a[], int l, int r)
{
 int p,i,j,temp;
    p=a[l];
    i=l;
    j=r+1;
    do{
        do{
            i++;
        }while(a[i]<p && i<=r);
        do{
            j--;
        }while(a[j]>p);
        if(i<=r)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    if(i<=r)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        temp=a[l];
        a[l]=a[j];
        a[j]=temp;
    return j;
}
void QuickSort(int a[], int l , int r)
{
    if(l<=r)
    {
        int s=HoarePartition(a,l,r);
        QuickSort(a,l,s-1);
        QuickSort(a,s+1,r);
    }
}
int main()
{
    int n,a[100];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}


#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    int n,factorial;
    printf("enter a number:\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("factorial of %d is %d\n",n,factorial);
    return 0;
}

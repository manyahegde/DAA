#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int m,n,gcd;
    printf("enter two numbers:\n");
    scanf("%d%d",&m,&n);
    gcd=GCD(m,n);
    printf("GCD of %d and %d is %d\n",m,n,gcd);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int GCD(int m, int n)
{
    int a=2,g=1;
    if(m==0) return n;
    if(n==0) return m;
    while((m>=a&&m!=0)&&(n>=a&&n!=0))
    {
        if(m%a==0)
        {
            if(n%a==0)
            {
                g=g*a;
                n=n/a;
            }
            m=m/a;
        }
        else
            a++;
    }
    return g;
}

int main()
{
    int a,b,gcd;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    gcd=GCD(a,b);
    printf("gcd of %d and %d is %d\n",a,b,gcd);
    return 0;
}

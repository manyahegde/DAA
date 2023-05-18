#include <stdio.h>
#include <stdlib.h>

int GCD(int m, int n)
{
    int t,rem1,rem2;
    t=(m<n)?m:n;
    while(n!=0)
    {
        rem1=m%t;
        if(rem1==0)
        {
            rem2=n%t;
            if(rem2==0)
            {
                return t;
            }
        }
        t=t-1;
    }
    return t;
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

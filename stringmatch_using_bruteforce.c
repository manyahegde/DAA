#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,m,n;
    char p[20],t[100];
    printf("enter the text:");
    gets(t);
    printf("enter the pattern:");
    gets(p);
    n=strlen(t);
    m=strlen(p);
    for (i=0;i<n-m;i++)
    {
        j=0;
        while (j<=m && p[j]==t[i+j])
        {
            j=j+1;
        }
        if(j==m)
        {
            printf("the pattern %s is found at %d",p,i);
            exit(0);
        }
    }
    printf("%s not found in the given text",p);
    return 0;
}

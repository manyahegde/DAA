#include <stdio.h>
#include <stdlib.h>

int a[20][20], reach[20], n;

void dfs(int v)
{
    reach[v] = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[v][i] && !reach[i])
        {
            printf("%d->%d\n", v, i);
            dfs(i);
        }
    }
}

int main()
{
    int i, j, count = 0;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            reach[i] = 0;
            a[i][j] = 0;
        }
    }

    printf("\nEnter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    dfs(0);

    for (i = 0; i < n; i++)
    {
        if (reach[i])
        {
            count++;
        }
    }

    if (count == n)
        printf("\nGraph is connected.");
    else
        printf("\nGraph is disconnected.");

    return 0;
}


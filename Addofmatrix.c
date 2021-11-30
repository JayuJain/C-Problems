#include <stdio.h>
int main()
{
    int i, j, n, a[n][n], b[n][n], c[n][n];
    printf("\nEnter the order of matrix:");
    scanf("%d", &n);
    printf("\nEnter the value for matrix A:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the value for matrix B:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nAddition of the matrix is:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d", c[i][j]);
        }
        printf("\n");
    }
}
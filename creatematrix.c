#include <stdio.h>

int main()
{
    int m, n, i, j;
    int arr[10][10];
    printf("Enter the no. of rows: ");
    scanf("%d", &m);
    printf("Enter the no. of columns: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element in row %i and column %i: ", i + 1, j + 1);
            scanf("%i", &arr[i][j]);
        }
    }
    //display the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
}











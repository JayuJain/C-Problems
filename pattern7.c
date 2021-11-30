//Wap to print
//..*..
//.* *.
//* * *
//.* *.
//..*..

#include <stdio.h>

int main()
{
    int i, j, k, h, l;
    printf("Enter the height of the diamond: ");
    scanf ("%i", &h);
    for (i = 1; i <= h; i++)
    {
        for(j = 0; j <= h - i - 1; j++)
        {
            printf(" ");
        }

        for (j = 1; j <=  i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (i = h - 1; i >= 1; i--)
    {
        for(j = h - i - 1; j >= 0; j--)
        {
            printf(" ");
        }
        for (j =  i-1 ; j >= 0; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}

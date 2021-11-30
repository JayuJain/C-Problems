//WAP to print pyramid:
//..1..
//.121.
//12321

#include <stdio.h>

int main()
{
    int i, j, k, b;
    printf("Enter the height of the pattern: ");
    scanf("%i", &k);
    for (i = 1; i <= k; i++)
    {
        for(j = 0; j <= k - i - 1; j++)
        {
            printf(" ");
        }
        b = i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%i", j);
            if (j == i)
            {
                while (b != 0)
                {
                    printf("%i", b);
                    b--;
                }
            }
        }
        printf("\n");

    }
}

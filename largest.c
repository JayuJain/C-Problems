#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter 1st value \n");
    scanf("%d", &a);
    printf("Enter 2nd value \n");
    scanf("%d", &b);
    printf("Enter 3rd value \n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf(" Largest  value  is %d ", a);
    }
    else if (b > a && b > c)
    {
        printf("Largest value is %d ", b);
    }
    else

        printf("Largest value is %d ", c);
}

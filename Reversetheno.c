//wap to rev a no
#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    printf("Enter the no. to be reversed: ");
    scanf("%i", &n);
    printf("The reversed no : ");
    while (n != 0)
    {
        k = n % 10;
        printf("%i", k);
        n /= 10;
    }
    printf("\n");
}

#include <stdio.h>

int main()
{
    int i, j, n, x;
    int sign=-1, y=1, p=1;
    float sum = 0;
    printf ("Enter the angle in radians : ");
    scanf ("%d", &x);
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            p = p*x;
            y = y*j;
        }
        sign = (-1)*sign;
        sum = sum+sign*p/y;
    }
    printf ("Sin %d = %f", x, sum);
    return 0;
}

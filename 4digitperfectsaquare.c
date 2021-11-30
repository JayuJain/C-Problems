#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int i, a, p, q, l, m, n;
    for (i = 1000; i <= 9999; i++)
    {
        p = i % 100;
        q = i / 100;
        l = 0;
        a = sqrt(p);
        if (p == a * a)
            l = 1;

        m = 0;
        a = sqrt(q);
        if (q == a * a)
            m = 1;

        n = 0;
        a = sqrt(i);
        if (i == a * a)
            n = 1;
        if (l == 1 && m == 1 && n == 1)
            printf("%d \n", i);
    }
}

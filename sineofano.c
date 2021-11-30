//WAP to find sin of a number (in rads.)
#include <stdio.h>
#include <math.h>
long fact(int n);
double sinner(double k);
int no;
int main(void)
{
    double n;
    printf("Enter the angle (in rads.): ");
    scanf("%lf", &n);
    n = fmod(n, 6.28318);
    printf("Enter precision factor: ");
    scanf("%i", &no);
    printf("n is: %lf rad. (periodic equivalent)\n", n);
    double si = sinner(n);
    printf("The sin of angle %lf rad. is: %lf\n", n, si);
}

long fact(int n)
{
    long f = 1;
    while (n != 1)
    {
        f = f * n;
        n -= 1;
    }
    return f;
}

double sinner(double k)
{
    double si = 0.0;
    int ctr = 1;
    for(int i = 1; i < no; i = i + 2)
    {
        si += (ctr * (pow(k, i) / fact(i)));
        //printf("%lf\n", si);
        ctr *= - 1;
    }
    return si;
}

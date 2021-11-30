//WAP to find nCr using recursion

#include<stdio.h>

void main()
{
    int n, r;
    float ncr;

    printf("Enter a positive value for n and r\n");
    scanf("%d%d", &n, &r);

    ncr = factorial(n) / ( factorial(r) * factorial(n - r) );

    printf("\nnCr Factorial of %d and %d is %0.2f.\n", n, r, ncr);

}

int factorial(int num)
{
    if(num)
        return(num * factorial(num-1));
    else
        return 1;
}

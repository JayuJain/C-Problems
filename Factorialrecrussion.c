//WAP to find factorial of a number using recursion
#include <stdio.h>

void main()
{
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, multiplyNumbers(n));
}

int multiplyNumbers(int n)
{
    if (n>=1)
    {
        return n*multiplyNumbers(n-1);
    }
    else
    {
        return 1;
    }

}

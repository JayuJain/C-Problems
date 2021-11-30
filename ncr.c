//WAP to find nCr

#include <stdio.h>


void main()
{
    int n,r,out;

    printf("Enter value of n: \n");
    scanf("%d",&n);
    printf("Enter value of r: \n");
    scanf("%d",&r);

    if (n>r)
    {
        out = fact(n)/(fact(n-r)*fact(r));
        printf("The value of nCr is : %d\n",out);
    }
    else
    {
        printf("ERROR !!");
    }

    if (n>r)
    {
        out = factorial(n)/(factorial(n-r)*factorial(r));
        printf("The value of nCr is : %d\n",out);
    }
    else
    {
        printf("ERROR !!");
    }



}

int fact(int in)
{
    int i,fac=1;
    for(i=1;i<=in;i++)
    {
        fac = fac*i;
    }
    return fac;
}

int factorial(int n)
{
int x;
if (n!=0)
{
  x=n*factorial(n-1);
  return x;
}
else
{
  x=1;
  return x;
}
}

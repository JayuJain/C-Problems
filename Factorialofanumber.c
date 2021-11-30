//WRITE A PROGRAM TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{
int num,i,factorial=1;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
factorial=factorial*i;
}
printf("Factorial of %d is %d",num,factorial);
}

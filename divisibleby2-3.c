#include<stdio.h>
int main ()
{
int num=0;
float a,b ;
printf ("Enter num \n ");
scanf ("%d", &num);
a=num%2;
b=num%3;
printf("When divisible by 2= %f ",a);
printf("When divisble by 3= %f ",b);
}

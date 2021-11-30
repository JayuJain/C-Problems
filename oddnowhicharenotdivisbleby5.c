//Write a program to display the odd numbers from 1 to 100 that are not divisible by 5.
#include<stdio.h>
int main ()
{
int i , a=0 ;
for (i=1;i<=100;i++)
{
if (i%2!=0 && i%5!=0)

printf ("%4d",i);
}
}













#include<stdio.h>
int main ()
{
int i =5, sum =0;
for(i=5;i*(i+1)<400;i++)
{
sum=sum+i;
}
printf("%d",sum);
}

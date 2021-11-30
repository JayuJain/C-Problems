//Wap to check that a digit no. Is a perfect square or not
#include<stdio.h>
#include<math.h>
int main()
{
int no;
printf("Enter the no.\n");
scanf("%d",& no);
int k = sqrt(no);
if(no==k*k)
printf("no. is perfect square\n");
else
printf("no. is not a perfect square\n");
}

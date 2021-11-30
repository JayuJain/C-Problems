#include<stdio.h>
#include<math.h>
int main()
{
 int num;
 printf("Enter the num:");
 scanf("%d",&num);
 if (num%2==0)
 printf("num is even\n ");
 else
 printf("num is odd\n");

int k = sqrt(num);
  if (k*k==num)
    printf("num is a perfect square\n");
  else
    printf("num is not a perfect square\n");


  int i,count=0;
  for(i=2;i<=num/2;i++)
  {

     if (num%i==0)
        count++;
  }

  if (num==1)
    printf("num is nor prime nor composite\n");
     else if ( count==0)
    printf("num is a prime no.\n");

  else
    printf("num is not a prime no.\n");
    }


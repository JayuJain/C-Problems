//WAP to find GCD and LCM of two numbers using recursion

#include <stdio.h>

void main()
{
   int num1, num2, hcf, lcm;

   printf("Enter the first value: \n");
   scanf("%d", &num1);
   printf("Enter the second value : \n");
   scanf("%d", &num2);
   hcf = gcd(num1, num2);

   printf("GCD: %d", hcf);
   printf("\nLCM: %d", (num1 * num2) / hcf);

}

int gcd(int x, int y)
{
   if (y == 0)
   {
      return x;
   }
   else
   {
      return gcd(y, x % y);
   }
}

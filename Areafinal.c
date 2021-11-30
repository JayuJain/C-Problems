//WAP to find the area of triangle
#include<stdio.h>
#include<math.h>
int main ()
{
int a,b,c;
float s, area ;
printf("Enter the value of side 1 \n");
scanf("%d",&a);
printf("Enter the value of side 2 \n");
scanf("%d",&b);
printf("Enter the value of side 3 \n");
scanf("%d",&c);

s=(a+b+c)/2.0;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area = %f \n",area);
}

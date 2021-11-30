#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,a[100],sum=0;
float avg;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter a value:");
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("sum of the numbers is %d\n", sum);
avg=sum;
avg=avg/n;
printf("The average of the numbers entered is %f",avg);
getch();
 }

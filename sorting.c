#include<stdio.h>
int main()
{
int ch, a[100],i,j,n;
while(ch!=3)
{

printf("Enter the no.\n");
scanf("%d",&ch);
switch (ch)
case 1 :
    display();
    bubble sort();
    output();
break;
case 2 :
    display();
    bubble sort_2();
    output();
break;
default
    printf("exit\n");

void input()
{
printf("Enter the no. of terms");
scanf("%d",&n);
for(i=0,i<n;i++)
{
printf("Enter the no.\n");
scanf("%d",&a[i]);
}
}

void output()
{
 for(i=0;i<n;i++)
 {
 printf("d",a[i]);
 }
}
bubble sort ()
{
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
int temp;
if(a[j]>a[j+1])
int a[j]=temp;
temp=a[j+1];
a[j+1]=a[j]
}
}
}


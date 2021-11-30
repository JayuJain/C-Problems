//Write a program to generate 100 odd integers and print 10 numbers in each line.
#include<stdio.h>
int main ()
{
int i,a=0;
for(i=1;i<=200;i++)
{
  if (i%2!=0)
 {
  printf("%4d",i);
  ++a;
 }
  if(a==10)
  {
  printf("\n");
  a=0;
  }

}
}



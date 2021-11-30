#include <stdio.h>
#include <stdlib.h>
int power(int y,int x){
    int pow=1,i;
    for(i=1;i<=y;i++){
        pow*=x;
    }
     return pow;
    }
int main()
{
   int a,b,pow;
   printf("Enter the base:");
   scanf("%d",&a);
   printf("\nEnter the power:");
   scanf("%d",&b);
   pow=power(b,a);
   printf("a to power b : %d ",pow);

    return 0;
}

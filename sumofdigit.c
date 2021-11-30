//WAP to find sum of digits
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,d,sum=0;
    printf("\n Enter a number:");
    scanf("%d",&no);
    while(no>0){
        d= no%10;
        sum+=d;
    no=no/10;

    }
    printf("\n Sum = %d",sum);

    return 0;
}

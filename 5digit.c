//WAP to find 5 digit number which on multiplication by 4, reverses the number

#include <stdio.h>

int main()
{
    int in,in1,k,sum;
    printf("Enter the number \n");
    scanf ("%d", &in);
    in1=in*4;
    while(in!=0)
    {
        k=in%10;
        sum =(sum*10)+k;
        in=in/10;
    }
    if(sum==in1)
    {
        printf("Number is reversed when multiplied by 4");
    }
    else
    {
        printf("Number is not reversed when multiplied by 4");
    }

    return 0;
}






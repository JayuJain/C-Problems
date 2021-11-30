//WAP to create 3 or 4 digit Armstrong Numbers

#include <stdio.h>
int main()
{
    int i,num,k,sum;
    int j,num1,k1,sum1;

    for(i=100;i<=999;i++)
    {
        sum=0;
        k=i;
        while(k!=0)
        {
            num=k%10;
            sum=sum+(num*num*num);
            k=k/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }


    for(j=1000;j<=9999;j++)
    {
        sum1=0;
        k1=j;
        while(k1!=0)
        {

            num1=k1%10;
            sum1=sum1+(num1*num1*num1*num1);
            k1=k1/10;
        }
        if(sum1==j)
        {
            printf("%d\n",j);
        }
    }


    return 0;
}

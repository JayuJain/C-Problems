//WAP to generate first 25 Prime Numbers

#include <stdio.h>

int main()
{
    int count=1,a,i,j;;
    while(count<=25)
    {
        for (i=1;i<=100;i++)
    {
        a=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                a++;
            }

        }
        if(a==2)
        {
            printf("%d\n",i);
            count++;
        }
    }


    }
    return 0;
}

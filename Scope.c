//WAP to show Implementations of scope at loop, function, local, global and extern in C.

#include <stdio.h>
#include "externNumber.c"

extern int ex;
int x = 25;

void f1()
{
    printf("The value of x at entry in function 1 is %d\n",x);
    x = 8;
    printf("The value of x after modification in function 1 is %d\n\n",x);
}

void f2()
{
    int i,a=2;
    printf("The value of a before modification in function 2 is %d\n",a);
    for(i=0;i<4;i++)
    {
        int c = a++;
        printf("Value of c after modification of a in for loop is %d\n",c);
    }
    printf("The value of a after modification in function 2's loop is %d\n\n",a);

}

void main()
{
    printf("The value of ex before modification in main function is %d\n",ex);
    printf("The value of x before modification in main function is %d\n\n",x);
    f1();
    f2();
    ex = 10;
    x=4;
    printf("The value of ex after modification in main function is %d\n",ex);
    printf("The value of x after modification in main function is %d\n\n",x);

}

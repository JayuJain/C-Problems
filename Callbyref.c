#include<stdio.h>
void square(int*);

int main()
{
    int s;
    printf("enter the side of a square");
    scanf("%d",&s);
    square(&s);


    return 0;
}
void square(int*side)
{
    int a=(*side)*(*side);
    printf("%d",a);
}

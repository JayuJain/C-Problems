#include<stdio.h>
#include<stdlib.h>
int swap(int*a,int*b);
    int a,b ;
int main()
{
    int a, b;

    printf("Enter an intger : a,b\n");
    scanf("%d%d", &a, &b);
    printf("a=%d\nb=%d",a,b);
    swap(&a,&b);
    printf("\n After swapping:");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}
int  swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}




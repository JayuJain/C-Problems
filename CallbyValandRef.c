//WAP to show Implementations of parameter passing call by value and reference in C.

int main()
{
    int a,b;
    printf("Enter numbers to be swapped: \n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping in call by value are : a = %d , b = %d\n",a,b);
    swapCBV(a,b);
    printf("Final values after call by value function in main(): a = %d , b = %d\n\n",a,b);

    printf("Numbers before swapping in call by reference are : a = %d , b = %d\n",a,b);
    swapCBR(&a,&b);
    printf("Final values after call by reference function in main() : a = %d , b = %d\n",a,b);



    return 0;
}

int swapCBV(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("Numbers swapped by call by value in function 'swapCBV' are : a = %d , b = %d\n",a,b);
    return 0;
}

int swapCBR(int *m,int *n)
{
    int temp;
    temp = *m;
    *m= *n;
    *n=temp;
    printf("Numbers swapped by call by reference in function 'swapCBR' are : a = %d , b = %d\n",*m,*n);
    return 0;
}

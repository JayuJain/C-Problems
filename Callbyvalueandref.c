//WAP to show Implementations of parameter passing call by value and reference in C.

int main()
{
    int a,b;
    printf("Enter numbers to be swapped: \n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping in call by value are : a = %d , b = %d\n",a,b);
    swapvalue(a,b);
    printf("Final values after call by value function in main(): a = %d , b = %d\n\n",a,b);

    printf("Numbers before swapping in call by reference are : a = %d , b = %d\n",a,b);
    swapref(&a,&b);
    printf("Final values after call by reference function in main() : a = %d , b = %d\n",a,b);



    return 0;
}

int swapvalue(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("Numbers swapped by call by value in function 'swapvalue' are : a = %d , b = %d\n",a,b);
    return 0;
}

int swapref(int *m,int *n)
{
    int temp;
    temp = *m;
    *m= *n;
    *n=temp;
    printf("Numbers swapped by call by reference in function 'swapref' are : a = %d , b = %d\n",*m,*n);
    return 0;
}

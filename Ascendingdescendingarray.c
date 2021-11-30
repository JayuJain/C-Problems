#include <stdio.h>

void main()
{
    int n,i,j,k,l,p;
    int temp;
    int a[100];

    printf("Enter the total number of integers\n");
    scanf("%d",&n);

    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0;j<n-1;j++)
    {
        for(p=0;p<n-1;p++)
        {
            if(a[p+1]<a[p])
            {
                temp = a[p+1];
                a[p+1] = a[p];
                a[p] = temp;
            }
        }

    }
    printf("Ascending Order is :\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
    printf("Descending Order is :\n");
    for(l=(n-1);l>=0;l--)
    {
        printf("%d\n",a[l]);
    }

}

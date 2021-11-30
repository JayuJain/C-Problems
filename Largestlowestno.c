#include <stdio.h>

void main()
{
    int n,i,j;
    int high,low;
    int a[100];
    printf("Enter the total number of integers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    high = a[0];
    low = a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]>high)
        {
            high = a[j];
        }

        else if(a[j] < low)
        {
            low = a[j];
        }

    }

    printf("Highest Number = %d\n",high);
    printf("Lowest Number = %d\n",low);
}

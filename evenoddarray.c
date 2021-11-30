//WAP to accept ‘n’ integers from the user into an array and display the count of even and odd integers.

#include <stdio.h>

void main()
{
    int n,i,j;
    int even=0,odd=0;
    int a[100];
    printf("Enter the total number of integers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even Numbers = %d\n",even);

    printf("Odd Numbers = %d\n",odd);
}

//WAP to calculate the sum and average of mxn matrix



#include <stdio.h>



void main()

{

    int m,n,i,j;

    float avg,sum=0;

    int arr[10][10];



    printf("Enter the number of rows\n");

    scanf("%d",&m);

    printf("Enter the number of columns\n");

    scanf("%d",&n);



    for(i=0;i<m;i++)

    {

        for(j=0;j<n;j++)

        {

            printf("Enter the element in row %i and column %i: \n", i + 1, j + 1);

            scanf("%d",&arr[i][j]);

            sum = sum +arr[i][j];

        }



    }







    printf("Sum of the elements is: %f\n",sum);

    avg = sum/(m*n);

    printf("Average of the elements is: %f\n",avg);



}




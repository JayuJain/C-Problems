//Write a program to accept ‘n’ integers from the user into an array and find the integer having highest frequency of occurrence.



#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, j, count, max, high;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter integers in array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    high = 0;
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[j]==arr[i])
            {
                count++;
                if(count > high)
                {
                    high= count;
                    max = arr[j];
                }
            }
        }
    }
    printf("The integer %d has highest frequency of occurrence\n", max);
    return 0;
}

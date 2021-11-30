/* WAP to accept two strings, compare them and display whether they are equal or not.
If not equal then display the string which is greater, without using built in functions. */

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50];
    char str2[50];
    int len1,len2,flag,i;

    printf("Enter the first string :\n");
    scanf("%s",&str1);

    printf("Enter the second string :\n");
    scanf("%s",&str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1>len2)
    {
        printf("First String is greater");
    }
    else if (len2>len1)
    {
        printf("Second String is greater");
    }
    else
    {
        for(i=0;i<len1;i++)
        {
            if(str1[i]>str2[i])
            {
                printf("First String is greater");
                break;
            }
            else if(str1[i]<str2[i])
            {
                printf("Second String is greater");
                break;
            }
            else
            {
                flag++;
                continue;
            }


        }
        if(flag==len1)
        {
            printf("Both Strings are equal.");
        }
    }

}

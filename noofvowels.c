//WAP to accept a string and find the number of vowels in it.

#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    int len,i,flag;
    flag =0;

    printf("Enter the string :\n");
    scanf("%s",&str);
    len = strlen(str);
    strlwr(str);

    for(i=0;i<len;i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            flag++;
        }
    }

    printf("The number of vowels are : %d",flag);
}

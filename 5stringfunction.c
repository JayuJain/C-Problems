//WAP to to demonstrate five string functions

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";

    int len = strlen(str1);
    printf("The length of string %s is : %d\n",str1,len);

    printf("\n");

    strcat(str1,str2);
    printf("Concatenated String : %s\n",str1);

    printf("\n");

    printf("Original String : %s\n",str2);
    strrev(str2);
    printf("Reversed String : %s\n",str2);

    printf("\n");

    printf("Before copying: \ns1 = %s \ns2 = %s\n",str1,str2);
    strcpy(str1,str2);
    printf("Copied string: \ns1 = %s  \ns2 = %s\n",str1,str2);

    printf("\n");

    int i = strcmp(str1,str2);
    if(i==0)
     {
        printf("Strings are equal");
     }

    else
    {
       printf("Strings are not equal");
    }

}

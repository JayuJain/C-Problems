#include<stdio.h>


void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int i, n = 0, flag = 0;

    printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        n++;
    }
    printf("The length of the string '%s' = %d\n", string, n);
    for (i = n- 1; i >= 0 ; i--)
    {
        reverse_string[n - i - 1] = string[i];
    }
   /*  Check if the string is a Palindrome */

    for (flag = 1, i = 0; i < n ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", string);
    else
       printf("%s is not a palindrome \n", string);
}

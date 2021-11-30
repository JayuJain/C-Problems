#include <stdio.h>
#include <string.h>
void main ()
{
 char string [25],temp[25],reverse_string[25]   = {'\0'};
 int i, n = 0, flag;
 printf("Enter a string\n");
 gets(string);
 //Keep going through each character of the string till its end
 n=strlen(string);
 printf ("The length of the string '%s'=%d\n",string, n);
 strcpy (reverse_string,string);
 strrev (reverse_string);
 flag = strcmp (reverse_string,string);
 if (flag==0)
  printf("%s is a palindrome string\n",string);
 else
 printf ("%s is not a plaindrome \n",string);

    }

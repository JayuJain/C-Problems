/* WAP to store the information of a person as his name, or ID Number using Union.
Ask the user for the information choice. */
#include <stdio.h>
union info
{
    char name[50];
    int id;
}store;
void main()
{
    int in;
    printf("How would you like to store your information ?\n");
    printf("1.NAME \t 2.ID NUMBER\n");
    scanf("%d",&in);
    switch(in)
    {
    case 1:
        printf("Enter your name - \n");
        scanf("%s",&store.name);
        printf("Input provided - Name : %s",store.name);
        break;
    case 2 :
        printf("Enter your ID Number - \n");
        scanf("%d",&store.id);
        printf("Input provided - ID : %d",store.id);
        break;
    default :
        printf("Invalid Choice");
    }
}

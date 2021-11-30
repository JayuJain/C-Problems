//Implementations of data types(basic and struct) for size, format and equality in C.
#include <stdio.h>


struct str{
    int id;
    char name[5];
}s;

void main()
{
    int i=25;
    float f=8.954;
    double d=547896124.8944;
    long l=1457836924;
    char c='j';


    //Size Of
    printf("Size Testing\n");
    printf("The size of int is : %d bytes\n",sizeof(i));
    printf("The size of float is : %d bytes\n",sizeof(f));
    printf("The size of double is : %d bytes\n",sizeof(d));
    printf("The size of long is : %d bytes\n",sizeof(l));
    printf("The size of char is : %d bytes\n",sizeof(c));
    printf("The size of structure is : %d bytes\n\n",sizeof(s));

    //Format Specifier
    printf("Format Testing\n");
    printf("The value of int is : %d \n",i);
    printf("The value of float is : %f \n",f);
    printf("The value of double is : %lf \n",d);
    printf("The value of long is : %ld\n",l);
    printf("The value of char is : %c \n\n",c);

    //Equality Testing
    i=100;
    f=100.00;
    d=100.00;
    l=100;
    c='d';

    printf("The new values for further operations are : \n");
    printf("The value of int is : %d \n",i);
    printf("The value of float is : %f \n",f);
    printf("The value of double is : %lf \n",d);
    printf("The value of long is : %ld\n",l);
    printf("The value of char is : %c \n\n",c);


    //int and float
    if(i==f)
    {
        printf("Integer and float are comparable \n");
    }
    else
    {
        printf("Integer and float are not comparable \n");
    }

    //int and double
    if(i==d)
    {
        printf("Integer and double are comparable \n");
    }
    else
    {
        printf("Integer and double are not comparable \n");
    }

    //int and long
    if(i==l)
    {
        printf("Integer and long are comparable \n");
    }
    else
    {
        printf("Integer and long are not comparable \n");
    }

    //int and character
    if(i==c)
    {
        printf("Integer and character are comparable \n\n");
    }
    else
    {
        printf("Integer and character are not comparable \n");
    }


    //Assignment Testing
    //double to float
    if(f=d)
    {
        printf("Float can be assigned a double value\n");
        printf("The float is %f and assigned double is %lf\n",f,d);
    }
    else
    {
        printf("Integer cannot be assigned a float value\n");
    }

    //double to int
    if(i=d)
    {
        printf("Integer can be assigned a double value\n");
        printf("The int is %d and assigned double is %lf\n",i,d);
    }
    else
    {
        printf("Integer cannot be assigned a double value\n");
    }


    //double to long
    if(l=d)
    {
        printf("Long can be assigned a long value\n");
        printf("The long is %ld and assigned double is %lf\n",l,d);
    }
    else
    {
        printf("Long cannot be assigned a double value\n");
    }


    //double and character
    if(c=d)
    {
        printf("Character can be assigned a double value\n");
        printf("The character is %c and assigned double is %lf\n\n",c,d);
    }
    else
    {
        printf("Double cannot be assigned a character value\n\n");
    }


    d=4294967395.0;
    printf("The value of double is changed to %lf\n",d);
    //double to float
    if(f=d)
    {
        printf("Float can be assigned a double value\n");
        printf("The float is %f and assigned double is %lf\n",f,d);
    }
    else
    {
        printf("Integer cannot be assigned a float value\n");
    }

    //double to int
    if(i=d)
    {
        printf("Integer can be assigned a double value\n");
        printf("The int is %d and assigned double is %lf\n",i,d);
    }
    else
    {
        printf("Integer cannot be assigned a double value\n");
    }


    //double to long
    if(l=d)
    {
        printf("Long can be assigned a long value\n");
        printf("The long is %ld and assigned double is %lf\n",l,d);
    }
    else
    {
        printf("Long cannot be assigned a double value\n");
    }


    //double and character
    if(c=d)
    {
        printf("Character can be assigned a double value\n");
        printf("The character is %c and assigned double is %lf\n",c,d);
    }
    else
    {
        printf("Double cannot be assigned a character value\n");
    }

}

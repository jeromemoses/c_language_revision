#include <stdio.h>

int main()
{
    //creating a string using char array
    char name[15] = {"jerome"};

    //using a format specifier for string %s
    printf("%s \n",name);

    //printing the char by acces the index of an string which is in a form of char array
    printf("%c \n",name[0]);

    //modifying /  changing the char inside the string
    name[2] = 's';

    //printing the string to check the changes made
    printf("%s\n",name); 

    //loop over the string
    for (int i = 0; i < sizeof(name); i++)
    {
        printf("%c ",name[i]);
    }
    

}

#include <stdio.h>
#include <string.h>

int main()
{
    //creating two string one with pre-initialized char
    char name[10] = "jerome";
    char empty_char[10] = "";

    //copying the char from name to empty string
    strcpy(empty_char,name);

    //printing the string which copied from name to empty_char
    printf("%s ",empty_char);

    //declaring another string to concatinate with
    char last_name[10] = " moses";

    //adding the two strings 
    strcat(name,last_name);

    printf("\n%s ",name);

    //findinf the string length
    int str_length = strlen(name);

    printf("\nThe length of the string is : %d\n",str_length);

    printf("%d",strcmp("jerome","jerome"));

    strcmp(last_name,name) ? printf("\nthe given two strings are not equal") : printf("\nthe given two strings are equal");
    return 0;
}
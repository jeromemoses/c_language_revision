#include<stdio.h>
#include<string.h>

struct per_details
{
    char name[50];
    short age;
};

int main()
{
    //creating the structure
    struct per_details pr1;

    // storing datas in the structure
    strcpy(pr1.name,"jerome");
    pr1.age = 22;

    //creating an pointer of structure and assigning the pr1 address to it
    struct per_details* str_pointer = &pr1;

    //printing the datas from pointer of structure which pointing the address of pr1
    printf("Entered name: %s\nage: %d",(*str_pointer).name,(*str_pointer).age);
    
    return 0;
}
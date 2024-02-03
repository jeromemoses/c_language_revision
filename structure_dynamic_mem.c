#include<stdio.h>
#include<stdlib.h>

struct person
{
    char name[25];
    int age;
};

void main()
{   
    //creating structure pointer and assinging memory dynamically 
    struct person *pr1 = (struct person*)malloc(sizeof(struct person));

    *pr1->name = "jerome";
    pr1->age = 22;

    printf("Available data inside the pointer structure address:\nname:%s\t age: %d",pr1->name,pr1->age);

    

}
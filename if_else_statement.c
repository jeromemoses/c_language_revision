#include <stdio.h>

int main()
{
    //ask the user to enter thier age 
    int age;
    printf("enter the age to check whether you are a major or minor: ");
    scanf("%d",&age);
    
    //if the age is above 18 this statement will execute
    if(age >= 18)
    {
        printf("\nyou are a major\n");
    }
    //if the age is lesser than 18 this statement will execute
    else
    {
        printf("\nyou are a minor\n");
    }
}


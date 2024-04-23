#include <stdio.h>

int main()
{
    //declaration
    int age;
    
    //asks the age from user
    printf("entr your age: ");
    scanf("%d",&age);
    
    //prints your age is eligible or not for voting
    (age>=18)?(printf("you are eligible for voting")):(printf("you are not eligible for voting"));
}

/*
entr your age: 18
you are eligible for voting
*/

#include <stdio.h>

//declaring sub function to assign it in pointer array of function
void add(int a,int b)
{
    printf("the addition of two given number is: %d",a+b);
}

void sub(int a,int b)
{
    printf("the subraction of two given number is: %d",a-b);
}

void multiplication(int a,int b)
{
    printf("the multiplicaton of given value is: %d",a*b);
}

void division(int a,int b)
{
    printf("the divisionof two given number is: %f",a/b);
}


int main()
{
    int choice;
    //asks user to enter the two value
    int num1,num2;
    printf("enter the value of two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    //assigning the sub function's address to pointer array index
    int (*pointer_arr[])(int,int) = {add,sub,multiplication,division};
    
    rep:
    {
        //asks the user to what to do with given two number
        printf("\n0.addition\n1.subraction\n2.multiplication\n3.division");
        printf("\nchoose what to do with given two number: ");
        scanf("%d",&choice);
    }
    
    //if the user choice in invalid this program will execute and return the function to ask again
    if (choice > 3)
        {
            printf("\nyour choice is not valid, enter the choice between 0 and 3");
            goto rep; //gose to the function named rep
        }
        
    //pointing the pointer array to the user decided function's address 
    (*pointer_arr[choice])(num1,num2);
}




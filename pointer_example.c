#include<stdio.h>
int main ()
{
    //declaring pointer variable of integer type
    int *point;
    
    //declares normal integer variable
    int number = 77;
    
    //set the pointer variable to point the address of normal integer variable
    point = &number;
    
    //prints the address of pointer
    printf("addres of pointer = %d \n",point);
    
    //prints the value assign by the pointing addres of other variable
    printf("\nvalue assing by *pointer from other variable = %d",*point);
}

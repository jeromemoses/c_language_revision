#include<stdio.h>

int main()
{
    //declaration of variable
    //normal integer
    int number = 170;
    //pointer
    int *pointer;
    //double pointer
    int **point_2;
    
    //sets pointer to point at address of variable named as number   
    pointer = &number;
    
    //sets the point_2 (double pointer) to point at address of pointer variable
    point_2 = &pointer;
    
    //prints the normal interger name number 
    printf("number value from origin variable: %d",number);
    
    //prints the adress of pointer
    printf("\naddress of ponter: %p",pointer);
    
    //prints the value assing my pointer the other variable
    printf("\npointer pointing to number's addres so pointer = %d",*pointer);
    
    //prints the addres of double pointer
    printf("\nadress of pointo to pointer variable : %p ",point_2);
    
    //prints the value assign by pointer to point at another pointer
    printf("\nvalue derived by pointer when it point at another pointer: %d",**point_2);
}

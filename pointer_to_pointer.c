#include <stdio.h>

int main()
{
    int var = 777;
    //declaring pointer and assigning variable's address to it
    int *ptr1 = &var;
    //declaring the pointer to pointer and assinging the address of an pointer which hold the address of the varibale.
    int **ptr2 = &ptr1;

    //printing the values of variable and pointer and pointer to pointer.
    printf("Available value at the varibale :%d\n",var);
    printf("Available value at the ptr1 :%d\n",*ptr1);
    printf("Available value at the ptr2 :%d\n\n\n",**ptr2);

    //printing the address of variable, pointer and pointer to pointer
    printf("address of the varibale %p\n",var);
    printf("address of the pointer %p\n",ptr1);
    printf("address of th epinter to pointer %p\n",ptr2);
}
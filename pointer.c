#include <stdio.h>

int main()
{
    int var1 = 25;

    //declaring pointer and assingining varible address to it. 
    int *ptr = &var1;
    

    //using a address format specifier for the ptr variable
    printf("%p \n",ptr);

    //printing the value inside the prt address
    printf("%d \n",*ptr);


    int num = 8939513;
    //storing num address in num_ptr pointer
    int *num_ptr = &num;

    printf("the value %d store is a address of %p",*num_ptr,num_ptr);

    return 0; 
}
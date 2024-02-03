#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr[10];

    //passing the address of array to a pointer of array
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = &array[i];
    }
    
    //printing the values which is passed to the pointer address by the variable's address
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*ptr[i]);
    }
    

    return 0;
}
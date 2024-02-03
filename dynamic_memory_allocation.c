#include <stdio.h>

#include <stdlib.h>
/*we get three functions from this library
    malloc()
    calloc()
    free()
*/

int main()
{
    int *pointer;
    int size;
    //asks for the size for memory allocation
    printf("Enter the number of element you want to allocate: ");
    scanf("%d",&size);
    //allocating elements to the pointer using malloc

    pointer = (int *)malloc(size * sizeof(int));

    if(pointer == NULL)
    {   
        printf("Memory allocation failed:(\n");
    }
    else
    {
        printf("Memory successfully allocated using malloc :)\n");
        //storing values to the allocated memory
        for (int i = 0; i <size; i++)
        {
            pointer[i] = i+1;
        }

        //prntes all the lements inside the allocated memory of an array
        for (int i = 0; i < size; i++)
        {
            printf("%d, ",pointer[i]); 
        }
    }
    return 0;

}
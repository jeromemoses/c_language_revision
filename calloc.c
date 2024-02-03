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

    // pointer = (int*)calloc(size,sizeof(int));

    pointer = (int*)calloc(size,sizeof(int));

    if(pointer == NULL)
    {   
        printf("Memory allocation failed:(\n");
    }
    else
    {
        printf("Memory successfully allocated using calloc :)\n");
        //storing values to the allocated memory
        for (int i = 1; i <= size; i++)
        {
            pointer[i] = pointer[i-1] + 5;
        }
        //prntes all the lements inside the allocated memory of an array
        for (int i = 1; i <= size; i++)
        {
            printf("%d, ",pointer[i]); 
        }
    }
    return 0;

}
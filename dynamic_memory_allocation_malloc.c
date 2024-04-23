#include <stdio.h>
#include <stdlib.h> //includes the standard library 

int main()
{
    //declaring pointer variable to allocated its memory
    int *pt;
    
    //variable to store the size of memory to be allocated
    int index_size;
    
    //asks user to enter the size wanted to be allocated
    printf("enter the size you want to allocate: ");
    scanf("%d",&index_size);
    
    //allocatin memory with malloc() function with the size user has entered
    pt = (int*)malloc(index_size * sizeof(int));
    
    //if memory allocation is not done this program executes
    if(pt == NULL)
    {
        printf("memory is not allocated");
    }
    else //if allocation succeed this program will be executed
    {
        printf("memory is allocated successfully");
        
        //storing values to the allocated memory 
        for(int j = 0;j<index_size;j++)
        {
            pt[j]=j+1;
        }
        
        //prints the element store in the allocated memory
        printf("\nelements stored in allocated memory: ");
        for(int j = 0;j<index_size;j++)
        {
            printf("%d ",pt[j]);
        }
    }
}



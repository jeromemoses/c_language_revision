#include <stdio.h>
#include <stdlib.h>  //includes the standard library 

int main()
{
    //declaring pointer variable to allocated its memory
    int *pt;
    
    //variable to store the size of memory to be allocated
    int size;
    int ext_size;
    
    //asks user to enter the size wanted to be allocated
    printf("enter the size you want to allocate: ");
    scanf("%d",&size);
    
    //allocates the memory with malloc() by given size
    pt = (int*)malloc(size * sizeof(int));
    
    //if memory allocation is not done this program executes
    if(pt == 0)
    {
        printf("memory is not allocated");
    }
    else  //if allocation succeed this program will be executed
    {
        printf("memory is allocated successfully");
        
        //stores element to allocated memory
        for(int j = 0;j<size;j++)
        {
            pt[j]=j+1;
        }
        
        //prints the element of allocated memory
        printf("\nallocated memory: ");
        for(int j = 0;j<size;j++)
        {
            printf("%d ",pt[j]);
        }
        
        
        //asks user to enter the size for reallocation
        printf("\nenter the size you wanted to reallocate: ");
        scanf("%d",&ext_size);
        
        //reallocates memory with realloc()
        pt = (int*)realloc(pt,ext_size*sizeof(int));
        
        printf("\nreallocation of memory is successfully done");
        
        //stores element to reallocated memory from the end of already allocated memory
        for(int i = size;i<ext_size;i++)
        {
            pt[i] = i+1;
        }
        
        //prints the elements of reallocated memory
        printf("\nreallocated memory: ");
        for(int i = 0;i<ext_size;i++)
        {
            printf("%d ",pt[i]);
        }
    }
}


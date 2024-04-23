#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring pointer
    int *pt1,*pt2;
    int size;
    
    //asks user to enter the memory size wanted to be allocated
    printf("enter the memory rang you want to allocate: ");
    scanf("%d",&size);
    
    //allocation desired memory size to pt1 by malloc()
    pt1 = (int*)malloc(size*sizeof(int));
    
    //allocation desired memory size to pt2 by calloc()
    pt2 = (int*)calloc(size,sizeof(int));
    
    
    // memory allocation fails this program will be executed
    if(pt1 == NULL && pt2 == NULL)
    {
        printf("memory allocation failed");
    }
    else //if allocation succeed this function will be executed
    {
        printf("memory allocation by malloc() is successful");
    
        //frees the memory allocated by malloc() with free() function
        free(pt1);
        
        printf("\nmemory allocated by malloc is freed");
        
        printf("\n\nmemory allocation by calloc() is successful");
        
        //frees the memory allocated by calloc() with free() function
        free(pt2);
        
        printf("\nmemory allocated by calloc is freed");
    }
}


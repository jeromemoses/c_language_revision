#include <stdio.h>
#include <stdlib.h>//includes the standard library 
int main()
{
    //declaring pointer variable to allocated its memory
    int *arr;
    
    //variable to store the size of memory to be allocated
    int size;
    
    //asks user to enter the size wanted to be allocated
    printf("enter the number of element: ");
    scanf("%d",&size);
    
    //allocatin memory with calloc() function with the size user has entered
    arr = calloc(size,sizeof(int));
    
    //if memory allocation is not done this program executes
    if(arr == NULL)
    {
        printf("memory allocation failed");
    }
    else  //if allocation succeed this program will be executed
    {
        printf("memory allocated by calloc is successfully done");
        
        //store element in allocated memory
        for(int jd = 0;jd<size;jd++)
        {
            arr[jd]=jd+1;
        }
        
        //prints the element store in the allocated memory
        printf("\nelement stored in the allocated memory: ");
        for(int jd = 0;jd<size;jd++)
        {
            printf("%d ",arr[jd]);
        }
    }
}


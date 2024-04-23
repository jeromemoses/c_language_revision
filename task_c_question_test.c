#include <stdio.h>

int main()
{
    //variable to store the array index location of removed element
    int dl_element_location;
    //variable to store the removed element
    int removed;
    //flag is to
    int flag = 0;
    
    //asks the size of array
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    
    //creates the array with given size and asks user to enter its elements
    int arr[ar_size];
    for(int d=0;d<ar_size;d++)
    {
        printf("array[%d]: ",d);
        scanf("%d",&arr[d]);
    }
    
    //calculates the sum of array elements 
    int sum_ar = 0;
    for(int j = 0;j<ar_size;j++)
    {
        sum_ar = sum_ar+arr[j];
    }
    //prints the sum of element in array
    printf("sum of array: %d",sum_ar);
    
    //prints the given array
    printf("\narray: ");
    for(int j = 0;j<ar_size;j++)
    {
        printf("%d ",arr[j]);
    }
    
    //asks user to enter the divisible value to remove element from array
    int rem;
    printf("\nenter the number that should be divisible by sum of array after removing an element: ");
    scanf("%d",&rem);
    
    //checks the array to wich element is possible to remove to satisfy the divisible value 
    for(int jd = 0;jd<ar_size;jd++)
    {
        int r = sum_ar-arr[jd];
        if(r%rem == 0)
        {
            dl_element_location = jd;
            removed = arr[jd];
            flag = 1; //if any number removed in the array assigns 1 to flag
            break;
        }
    }
    
    //if flag is assign by 1 this below code will be executed 
    if(flag == 1)
    {
        //shift the element after the removed element index position in array
        for(int a = dl_element_location;a<ar_size-1;a++)
        {
            arr[a]=arr[a+1];
        }
        
        //prints array after deleting an index value
        printf("array = ");
        for(int i = 0;i<ar_size-1;i++)
        {
            printf("%d, ",arr[i]);  
        }
        
        //prints which element is removed
        printf("\nremoved element: %d",removed);
        
        //calculates the total summ of array after removing the element
        sum_ar = 0;
        for(int j = 0;j<ar_size-1;j++)
        {
            sum_ar = sum_ar+arr[j];
        }
        //prints the sum of array after removing the element
        printf("\nsum of array: %d",sum_ar);
    }
    else //if no value can be removed from the array then it prints the origin array as it is
    {
        printf("\narray: ");
        int i = 0;
        while(arr[i] != '\0')
        {
            printf("%d ",arr[i]);
            i++;
        }
    }
}
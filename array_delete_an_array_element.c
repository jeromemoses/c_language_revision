#include <stdio.h>

int main()
{
    //receives array size from user
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    
    //receives array element fromn user one by one
    printf("\nenter the values of array one by one\n");
    for(int j = 0;j<ar_size;j++)
    {
        printf("\narray[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    //prints the received array elements 
    printf("array = ");
    for(int i = 0;i<ar_size;i++)
    {
      printf("%d, ",arr[i]);  
    }
    
    //ask the potion of array index to be deleted
    int pos;
    printf("enter the index you want to be deleted: ");
    scanf("%d",&pos);
    
    /*shifting the next array element to the given index one by one 
    so the element in the given array index will be deleted and replaced with next element of arrays
    */
    for(int a = pos-1;a<=ar_size-1;a++)
    {
        arr[a]=arr[a+1];
    }
    
    //creates another array and shifting all the element from origin array to newly created one
    int temp[ar_size-1];
    for(int jd = 0;jd<=ar_size-1;jd++)
    {
        temp[jd] = arr[jd];
    }
    
    //prints array after deleting an index value
    printf("array = ");
    for(int i = 0;i<ar_size-1;i++)
    {
      printf("%d, ",temp[i]);  
    }
}
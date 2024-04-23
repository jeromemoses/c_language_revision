#include <stdio.h>

int main()
{
    //receiving array size from user
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    
    //receiving array element from user one by one
    printf("\nenter the values of array one by one\n");
    for(int j = 0;j<ar_size;j++)
    {
        printf("\narray[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    //prints the received array
    printf("array before reversing: %d",arr[0]);
    for(int j=1;j<ar_size;j++)
    {
       printf(", %d",arr[j]); 
    }
    
    //reversing the array 
    int temp;
    for(int i =0;i<ar_size/2;i++)
    {
      
      temp = arr[i];
      arr[i] = arr[ar_size-i-1];
      arr[ar_size-i-1] = temp;
      
    }
    
    //prints the reversed array
    printf("\narray after reversing: %d",arr[0]);
    for(int j=1;j<ar_size;j++)
    {
       printf(", %d",arr[j]); 
    }
}
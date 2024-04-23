#include <stdio.h>

int main()
{
     //ask array size from user
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    
    //ask element of array one by one from user
    printf("\nenter the values of array one by one\n");
    for(int j = 0;j<ar_size;j++)
    {
        printf("\narray[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    //prints the received array element 
    printf("\narray = ");
    for(int i = 0;i<ar_size;i++)
    {
      printf("%d, ",arr[i]);  
    }
    
    //rotates the array element to right
    int rotate_right;
    printf("\nhow many times do you want to rotate the array to the right side: ");
    scanf("%d",&rotate_right);
    for(int i = 0;i<rotate_right;i++)
    {
        int last,a;
        last = arr[0];
        for(a = 0;a < ar_size-1;a++)
        {
            arr[a] = arr[a+1];
        }
        arr[a] = last;
    }
     
     
    //prints the rotated array 
    printf("After rotating the given array %d times the right :",rotate_right);
    for(int i = 0;i<ar_size;i++)
    {
      printf("%d, ",arr[i]);  
    }
}





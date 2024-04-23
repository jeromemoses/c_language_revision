#include <stdio.h>

int main()
{
     //receiving array from user
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    printf("\nenter the values of array one by one\n");
    for(int j = 0;j<ar_size;j++)
    {
        printf("\narray[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    printf("array = ");
    for(int i = 0;i<ar_size;i++)
    {
      printf("%d, ",arr[i]);  
    }
    
    int rotate_left;
    printf("\nhow many times do you want to rotate: ");
    scanf("%d",&rotate_left);
    for(int i = 0;i<rotate_left;i++)
    {
        int last,a;
        last = arr[ar_size-1];
        for(a = ar_size-1;a>0;a--)
        {
            arr[a] = arr[a-1];
        }
        arr[0] = last;
    }
     
    //prints the rotated array 
    printf("After rotating the given array %d times the left :",rotate_left);
    for(int i = 0;i<ar_size;i++)
    {
      printf("%d, ",arr[i]);  
    }
}
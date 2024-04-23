#include<stdio.h>
int total;
int main ()
{
    //receiving array size and element from user
    int ar_size;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    printf("\nenter the values of array one by one\n");
    for(int j = 0;j<=ar_size;j++)
    {
        printf("\narray[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    //checks the array for repeated element (duplicate) by == relational operator
    for(int j = 0;j<=ar_size;j++)
    {
        for(int d = j+1;d<=ar_size;d++)
        {
            if (arr[j] == arr[d])
            {
                printf("\n array[%d] == array[%d] : %d",j,d,arr[d]);//prints the similar element in array
                total=total+1;
            }
        } 
    }
    //prints the number of duplicate present in given array
    printf("\nnumber of duplicate element present in array = %d",total);
}    
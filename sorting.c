#include<stdio.h>

int flag;

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort_array(int arr[],int size)
{
    for (int step = 0; step < size-1; step++)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] >arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
        
    }
    
}

int main()
{
    int ar_size;
    printf("enter the size of array you want to creat: ");
    scanf("%d",&ar_size);
    int array[ar_size];
    printf("Enter the values of array with space between:\n->");
    for (int i = 0; i < ar_size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Given array : {");
    for (int i = 0; i < ar_size; i++)
    {
        if (i != ar_size-1)
        {
            printf("%d, ",array[i]);
        }
        else
        {
            printf("%d}",array[i]);
        }
    }
    printf("\n");

    sort_array(array,ar_size);

    printf("\nAfter sorting the given array in ascending order: ");
    printf("\nGiven array : {");
    for (int i = 0; i < ar_size; i++)
    {
        if (i != ar_size-1)
        {
            printf("%d, ",array[i]);
        }
        else
        {
            printf("%d}",array[i]);
        }
    }
    printf("\n\n");
    
    
    return 0;
}
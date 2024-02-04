#include<stdio.h>

void linear_search(int array[],int size,int target)
{
    for (int i = 0; i < size; i++)
    {
        if(target == array[i])
        {
            printf("The given target value is present in index at array[%d]",i);
            return;
        }
    }
    printf("The given target value is not present in the array");
}

void main()
{
    int arr[] = {7,77,777,345,67,89,100};

    //passing array to search the desired value
    linear_search(arr,7,777);
}
#include <stdio.h>

void printArray(int size,int arr[size])
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int array[10] = {1,5,6,7,8,9,3,4,7,7};
    //passing a array to a function which prints the value inside the array
    printArray(10,array);

    return 0;
}
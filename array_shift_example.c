#include <stdio.h>

int main()
{
    //stores the data to array with size of 50
    int arr[50];
    for(int i = 0;i<50;i++)
    {
        arr[i] = i+1;
    }
    
    //prints the data
    for(int i = 0;i<50;i++)
    {
        printf("%d = %d\n",i,arr[i]);
    }
    printf("\n>>\n");
    
    //shift the array 10 times
    for(int j =0;j<10;j++)
    {
        for(int i = 0;i<50;i++)
        {
            arr[i] = arr[i+1];
        }
    }
    
    for(int i = 0;i<50;i++)
    {
        printf("%d = %d\n",i,arr[i]);
    } 
}


#include <stdio.h>

int main()
{
    //variable to store the combined 4 elements of array 
    long int temp=0;
    
    //declaring array with 60 elements 
    int arr[60] = {22,56,24,50,12,56,78,90,56,1,87,3,34,56,76,12,34,78,95,3,12,45,78,12,34,65,78,3,2,45,12,43,56,78,9,4,3,67,45,3,76,34,12,34,76,89,8,4,35,23,57,42,15,76,90,45,34,76,80,9};
    
    printf("combined element of array by 4: ");
    for(int j =0;j<60;j+=4)
    {
        temp=0;
        for(int i =j;i<j+4;i++)
        {
            temp = temp*100;
            temp = temp+arr[i];
        }
        printf("%ld, ",temp);
        
    }
    
}


#include<stdio.h>
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,'\0'};
    int *point = &arr;

    printf("values assign by pointer by pointing to a address of array:");
    while(*point != '\0')
    {
    printf("%d ",*point++);
    }
}
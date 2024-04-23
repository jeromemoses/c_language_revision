#include<stdio.h>
int main()
{
    //receiving array size from user
    int arsize;
    printf("enter the size of array: ");
    scanf("%d",&arsize);
    int arr[arsize];
    
    //asking user to enter the data acording to index
    for(int j = 0;j < arsize;j++)
    {
        printf("array[%d]: ",j);
        scanf("%d",&arr[j]);
    }
    
    //asking potition to insert the newvalue
    int point,rpvalue;
    printf("\nenter from where you want to insert the value: ");
    scanf("%d",&point);
    printf("\nenter the value you want to enter: ");
    scanf("%d",&rpvalue);
    
    //shifting array element to another new array
    int temp[arsize];
    for(int jd = 0;jd < arsize;jd++)
    {
        temp[jd]=arr[jd];
    }
    
    //seting a potiton to insert a new element in array
    arr[point-1] = rpvalue;//inserts new element 
    
    //after insert again shifting a element to the past array from the position of inserting a element
    for(int y = point;y<=arsize;y++)
    {
        arr[y+1]=temp[y];
    }
    
    //printf the array with newly inserted element
    printf("\narray[]= ");
    for(int i = 0;i<= arsize;i++)
    {
        printf("%d ",arr[i]);
    }
}
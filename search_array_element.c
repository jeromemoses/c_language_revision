#include <stdio.h>

int main()
{
    //deriving array data from user
    int ar_size,jd,search;
    printf("enter the size of array: ");
    scanf("%d",&ar_size);
    int arr[ar_size];
    printf("\nenter the array values: ");
    for(jd=0;jd<=ar_size;jd++)
    {
        printf("array[%d]: ",jd);
        scanf("%d",&arr[jd]);
    }
    
    //asking to to search for
    printf("enter the value you want to search: ");
    scanf("%d",&search);
    
    //searching the releted element from the array
    for(jd=0;jd<=ar_size;jd++)
    {
        if(search == arr[jd])
        {
            printf("arr[%d]\n",jd);//prints the element if the search element from user and array element are matched
        }
    }
}


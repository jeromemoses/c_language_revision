#include<stdio.h>

int main()
{
    //array sample
    int storage[5] = {7,5,4,3,2};
    //printf("%d ",storage );

    //printing the stored value with its index address
    printf("%d\n",storage[0]);

    //looping through the array index and printing all the values stored inside the array
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ",storage[i]);
    }
    return 0;
}
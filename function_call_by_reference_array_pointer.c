#include <stdio.h>
void point_f(int *n)
{
    printf("%d ",*n);
    if(*n == 1)
    {
        printf("\n");
        while(*n != 0)
        {
            printf(" %d",*n--);
            
        }
    }
}

int main()
{
    int array[11] = {10,9,8,7,6,5,4,3,2,1};
    for(int a =0;a<11;a++)
    {
        point_f(&array[a]);
    }
}
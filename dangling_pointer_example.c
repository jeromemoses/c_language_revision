#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int a = 751;
    ptr = &a;
    free(ptr);
    printf("%d",*ptr);
}

#include <stdio.h>

int func(int i)
{
    if(i==1 || i==0)
    {
        return 1;
    }
    return func(i-2) + func(i-1);
}

int main()
{
    int num = 8;
    printf("%d",func(num));
    return 0;
}
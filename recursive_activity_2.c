#include <stdio.h>

int func(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    return x * func(x-2);
}

int main()
{
    int num = 7;
    printf("%d",func(num));
    return 0;
}
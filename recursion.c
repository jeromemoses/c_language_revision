#include <stdio.h>

void multiply(int num,int times)
{
    if(times > 0)
    {
        printf("%d \n",num*times);
        multiply(num,times-1);
    }
    else
    {
        return;
    }
}

int main()
{
    multiply(10,7);
}
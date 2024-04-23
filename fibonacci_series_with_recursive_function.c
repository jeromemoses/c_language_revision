#include <stdio.h>

int fibano(int);

int main()
{
    int u;
    printf("enter which term of fibonaccy number you wanted to be print: ");
    scanf("%d",&u);
    printf("%d",fibano(u));
}
int fibano(int f)
{
    if(f == 0)
    {
        return 0;
    }
    else if(f == 1)
    {
        return 1;
    }
    else
    {
        return fibano(f-1)+fibano(f-2);
    }
    
}
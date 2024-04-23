#include <stdio.h>

int main()
{
    int fact;
    scanf("%d",&fact);
    int j;
    for(int i = fact-1;i>0;i--)
    {
        fact = fact * i;
    }
    
    printf("%d",fact);
}
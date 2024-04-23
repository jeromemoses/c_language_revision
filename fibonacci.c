#include <stdio.h>

//recursive function declaration
int fibano(int);

int main()
{
    //variable to store the range of fibonaccy number to print
    int range;
    
    //asks user to enter the term range of fibonacci number
    printf("enter range of fibonacci number you wanted to be print: ");
    scanf("%d",&range);
    
    //looping from 0 to given range of fibonacci and traversing it to fibonacci recurssive function
    for(int j=0;j<=range;j++)
    {
        printf("%d, ",fibano(j));
    }
    
}

//recursive function declaration, it returns the fibonacci elements 
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




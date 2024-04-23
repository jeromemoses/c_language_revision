#include <stdio.h>

//declaring fibonacci finding functions 
int fibano(int);

//declaring prime number finding function
int prime(int);

int main()
{
    //variable to store the range of fibonaccy number to print
    int range;
    int result;
    
    //asks user to enter the term range of fibonacci number
    printf("enter range of fibonacci number you wanted to be print: ");
    scanf("%d",&range);
    
    //prints the fibonacci number
    printf("fibonacci: ");
    for(int j = 0;j<=range;j++)
    {
        printf("%d, ",fibano(j)); //traverses the looped number count to fibonacci finding function 
        //fibano function returns the fibonacci value
    }
    
    //
    printf("\nprime numbers in fibonacci: ");
    for(int j = 1;j<=range;j++)
    {
        int result = fibano(j);
        if(prime(result) != 0)
        {
            printf("%d, ",result);
        }
    }
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

int prime(int range)
{
    int divider;
    int jd = range/2;
    int flag = 0;
    
    //check whether the received number by function argument is prime or not
    for (divider = 2; divider <= jd; divider++)
    {
        if (range%divider == 0)//breaks the loop if the value is divisible by any lesser number of range
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) 
    {
       return 0;
    }
    else
    {
        return range;
    }
    //prints the value (prime number) if the value is not divisible by any lesser number and equal to the divider value
}

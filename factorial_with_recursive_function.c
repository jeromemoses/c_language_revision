#include <stdio.h>

//declaring recursive function , returns the factorial value
int fact(int f)
{
    if(f <= 1)
    {
        return 1;
    }
    return f*fact(f-1);
}

int main()
{
    //variable to store input number to find its factorial value
    int ft;
    
    //variable to store the retutn value from recursive function
    int result;
    
    //asks the user to enter the number to find its factorial value
    printf("enter the number to find its factorial value: ");
    scanf("%d",&ft);
    
    //traversing the input number to recursive function
    result = fact(ft);
    
    //printf the return value (factorial) from recursive function
    printf("\nfactorial of given number: %d",result);
}

#include <stdio.h>

int table;

//declaring the recursive function
int sum(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    else
    {
        return a*a;
    }
}

int main()
{
    //ask user to enter the table and nth term of it to print its value
    int pos;
    printf("enter the numbr to find its squar: ");
    scanf("%d",&table);

    int result;
    result = sum(table);
    
    printf("squar root of %d is: %d",table,result);
    
}

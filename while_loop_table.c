#include<stdio.h>

int main()
{
    
    //declaring variable to start multiple from 
    int table,mlt=1;
    int a =1;
    
    //asks user to enter the table
    printf("enter the table to be printed: ");
    scanf("%d",&table);
    
    //printf the given table using while loop
    while(mlt<=10)
    {
        printf("%d x %d = %d\n",table,mlt,table*mlt);
        mlt++;
    }
}


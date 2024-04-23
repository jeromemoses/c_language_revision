#include<stdio.h>

//declaring function with argument with return type
int mlt(int,int);

int main()
{
    //asks the user the two values to be multiplied
    int a,b,result;
    printf("enter the value to be added: ");
    scanf("%d%d",&a,&b);
    
    result = mlt(a,b);//transfers the values to return type multiplying function 
    printf("%d x %d = %d",a,b,result);
    
}

int mlt(int j,int d)
{
    return j*d; //returns the value multiplied
}
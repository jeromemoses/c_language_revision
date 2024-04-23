#include<stdio.h>  
//function declaration
void ad(int, int);  
void main()  
{  
    //asks user to enter the two values to be added
    int a,b;  
    printf("\nEnter two numbers:");  
    scanf("%d%d",&a,&b);  
    ad(a,b);  //returning the two value to another function by calling it with argument 
}  

void ad(int a, int b)  
{  
    printf("\nThe result: %d",a+b); //prints the value wich added   
}  

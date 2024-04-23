#include<stdio.h>
int main ()
{
    //declaring a and b variables
    int a,b;
    
    //receiving the values of a and b from user
    printf("enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    
    //performing different bitwise operations and prints it results
    printf("\n%d & %d :%d ",a,b,a&b);
    printf("\n%d | %d :%d ",a,b,a|b);
    printf("\n%d ^ %d :%d ",a,b,a^b);
    printf("\n~a : %d",~a);
    printf("\n~b : %d",~b);
    printf("\na<<2 : %d\na>>2 :%d",a<<2,a>>2);
    printf("\nb<<2 : %d\nb>>2 :%d",b<<2,b>>2);
}
/*
enter the values of a and b: 
7
3

7 & 3 :3 
7 | 3 :7 
7 ^ 3 :4 
~a : -8
~b : -4
a<<2 : 28
a>>2 :1
b<<2 : 12
b>>2 :0
*/
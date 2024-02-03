#include<stdio.h>

//custome function
void sum(int i,int n)
{
    printf("%d",i+n);
}

int main ()
{   
    int i,n;
    printf("Enter two integers to be added: ");
    scanf("%d",&i);
    scanf("%d",&n);
    sum(i,n);
}
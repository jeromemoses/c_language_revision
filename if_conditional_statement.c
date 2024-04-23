/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int res;
int main()
{
    do{
    int num;
    printf("\nenter the number to find whether it is odd or even: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\nthe entered number : %d is even\n",num);
        printf("\ndo you want to entr the number again '1'=yes,'0' = no :");
        scanf("%d",&res);
    }
    if(num%2!=0)
    {
        printf("\nthe entered number : %d is odd\n",num);
        printf("\ndo you want to entr the number again '1'=yes,'0' = no :");
        scanf("%d",&res);
    }
    }
    while(res == 1);
}


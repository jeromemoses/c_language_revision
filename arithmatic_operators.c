/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//declaration    
int num1,num2;

//receiving value of two variable from user
printf("enter the values of number1 and number2: ");
scanf("%d%d",&num1,&num2); // num1 = 8 , num2 = 2

//perform the arithmatic sums and prints result
printf("\nnumber1 + number2 : %d\n",num1+num2);  
printf("\nnumber1 - number2 : %d\n",num1-num2);  
printf("\nnumber1 x number2 : %d\n",num1*num2);
printf("\nnumber1 / number2 : %d\n",num1/num2);
printf("\nnumber1 modulas number2 : %d\n",num1%num2);
}
/*
enter the values of number1 and number2: 
INPUT : num1=8   , numb2=2


OUTPUT:
number1 + number2 : 10

number1 - number2 : 6

number1 x number2 : 16

number1 / number2 : 4

number1 modulas number2 : 0
}*/



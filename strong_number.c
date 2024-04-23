#include<stdio.h>

int main()
{
    //variable to store input ,number of digit count ,modular value and factorial value of input number
    int in_num=0;
    int modulo_num=0;
    int jd = 0;
    int d_count = 0;
    int num;
    
    //asks user to enter the number to find whether its is strong number or not
    printf("enter the number to find whether it is strong number or not: ");
    scanf("%d",&in_num);
    
    //counts the number of digits is the input number is.
    num = in_num;
    while(num != 0)
    {
        num = num/10;
        d_count = d_count+1;
    }
    
    //loop to find the factorial value os each digits of numbers
    int d = in_num;
    for(int j = 1;j<=d_count;j++)
    {
        //seperates last digit input number whenever loops repeacts this statment
        modulo_num = in_num%10;
        in_num = in_num/10;
        int fact=1;
        
        //finds the factorial values of each digits of input numbers
        for(int i = 1;i<=modulo_num;i++)
        {
            fact=fact*i;
        }
        jd = jd+fact; //stores the factorial value in single variable named "jd"
        
    }
  
    //if the sum of factorial number of every digits in input number is equal to the actual input number then it is know as strong number
    //prints the input number is strong number or not
    if (jd == d)
    {
        printf("\nthe input number: %d is a STRONG number",d);
    }
    else 
    {
        printf("\nthe input number:%d is NOT a STRONG number",d);
    }
}
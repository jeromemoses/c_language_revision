#include <stdio.h>

//function to check the input number is palindrome or not
//function declared in long because in case user need to enter the long integer
long int is_palin(long int p_num) 
{
    long int reverse = 0;
    long int remain;
    
    //reverses the argumented input number and return the value to the main function
    while(p_num != 0)
    {
        remain = p_num%10;
        reverse = reverse * 10 + remain;
        p_num /= 10;
    }
    
    return reverse;
    
}

int main()
{
    long int input_num;
    
    //asks user to enter the number
    printf("enter the number to find whether it is palindrome or not: ");
    scanf("%ld",&input_num);
    
    //if the input is palindrom below code will be execetuted
    if(input_num == is_palin(input_num))  //traverses the input number to palindrome finding function
    {
        printf("\nentered number is palindrome: %ld == %ld ",input_num,is_palin(input_num));
    }
    else 
    {
        //prints the input number is not palindrome if it is not a apalindrome
        printf("\nentered number is not palindrome: %ld != %ld",input_num,is_palin(input_num));
    }
    
}
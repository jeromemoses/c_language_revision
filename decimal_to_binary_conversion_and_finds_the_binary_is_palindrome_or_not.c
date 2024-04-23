#include <stdio.h>

//declaring a function which reverses the traversed number in it
int is_palin(int p_num)
{
    long int reverse = 0;
    long int remain;
    
    //reversing a number argumented by function call
    while(p_num != 0)
    {
        remain = p_num%10;
        reverse = reverse * 10 + remain;
        p_num /= 10;
    }
    
    return reverse;//return the reverse form of argument number
}

int main()
{
    //varibales to store the input number and binary number for reverse it to check whether it is palindrome or not
    int num;
    int d=0;
    
    //asks user to enter the number to reverse it
    printf("enter the number to convert it into binary: ");
    scanf("%d",&num);
    
    //prints the binary representasion of given number
    printf("binary representation of %d: ",num);
    for(int j = 3;j >= 0;j--)
    {
        if(num >> j & 1 == 1)
        {
            printf("1");
            //store the binary representation in d as the normal decimal integer 
            if (j == 0)
            {
                d+=1;
            }
            else if(j == 1)
            {
                d+=10;
            }
            else if(j == 2)
            {
                d+=100;
            }
            else if(j == 3)
            {
                d+=1000;
            }
        }
        else
        {
            printf("0");
        }
    }
    
    //prints the reverse form of binary representation of input number
    printf("\nreverse form of binary representation of %d: %d",num,is_palin(d));
    
    //prints the binary representation of input number is palindrome or not
    if(d == is_palin(d))
    {
        printf("\nthe binary: %d == %d is palindrome",d,is_palin(d));
    }
    else
    {
        printf("\nthe binary %d != %d is not palindrome",d,is_palin(d));
    }
}
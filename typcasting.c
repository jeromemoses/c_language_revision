#include <stdio.h>

int main()
{
    //declaring integer to float variable without typcasting
    float b = 17/5;
    printf("with out typecast the value assign to float b: %f",b);
    
    //declaring the float variable with typecasting keyword
    b = (float)17/5;
    printf("\nwith typecast the value assign to float b: %f",b);
    
    //declaring integer to float variable without typcasting
    float a = 8/3;
    printf("\n\nwith out typecast the value assign to float b: %f",a);
    
    //declaring the float variable with typecasting keyword
    a = (float)8/3;
    printf("\nwith typecast the value assign to float a: %f",a);
}

#include <stdio.h>  
#define number 15  
int square=number*number;  
#undef number  
main() 
{  
    printf("%d",square);  
}  
#include <stdio.h>  

//declaring user define macro
#define MIN(a,b) ((a)<(b)?(a):(b))  //here the value return by conditional statement in this inline

void main() 
{ 
    int j,d;
    printf("enter the two values to find which one is minimum: \n");
    scanf("%d%d",&j,&d);
    printf("Minimum between %d and %d is: %d\n",j,d,MIN(j,d)); //prints the minimum value has user entered    
}  

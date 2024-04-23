#include <stdio.h>
int main()
{
    //asks user from where the loop should start and the end point of loop
    int a,b;
    printf("enter the range of loop where it start from and end at : ");
    scanf("%d%d",&a,&b);
    //while loop
    while(a<=b)
    {
        printf("%d\n",a); //print the caount value from start value to end value of loop
        a++;
    }
}
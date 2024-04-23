#include <stdio.h>
int main()
{
    //ask the user to enter the rang of loop count
    int count=1,range;
    printf("enter the range of count: ");
    scanf("%d",&range);
    //do while loop
    do
    {
        printf("%d\n",count); //prints the count value of loop
        count++;
    }
    while(count <= range);//while lopp condition 
}
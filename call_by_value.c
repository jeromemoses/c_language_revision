#include <stdio.h>

void print_num (int data)
{
    printf("Passed value:%d\n",data);
}


int main()
{
    int num = 170;

    //calling a print_num function by passing the values
    print_num(num);
    return 0;
}
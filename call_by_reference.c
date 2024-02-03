#include <stdio.h>

void print_num(int *data)
{
    int input;
    printf("Enter the value to be store inside the reference: ");
    scanf("%d",&input);
    *data = input;
}


int main()
{
    int num;

    //calling a print_num function by reference
    print_num(&num);

    printf("changed value by reference function call:%d\n",num);
    return 0;
}
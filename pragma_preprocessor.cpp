#include<stdio.h>
void sub_func();
#pragma startup sub_func
#pragma exit sub_func
int main()
{
    printf("i am in main function\n");
}
void sub_func()
{
    printf("i am in sub function\n");
}
#include <stdio.h>

void console_view(int d)
{
    printf("console value :%d\n", d);
}

int main()
{
    void (*func_ptr)(int) = &console_view;

    (*func_ptr)(777);
    return 0;
}
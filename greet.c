#include <stdio.h>

void greet (int size ,char name[size])
{
    printf("hello %s",name);
}

int main()
{
    greet(6,"JEROME\n");
    greet(4,"Arun\n");
    greet(6,"lokesh\n");
    return 0;
}
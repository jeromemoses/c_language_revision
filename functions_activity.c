#include <stdio.h>

void say(int x)
{
    printf("%d %d %d %d %d", x, x++, --x, x++, x++);
    
}

void main()
{
    int i = 8;
    say(i);
}
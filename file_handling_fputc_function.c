#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("put_c.txt","w+");
    fputc('j',file);
    fclose(file);
}
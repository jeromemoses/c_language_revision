#include<stdio.h>
int size;
void main()
{
    char m[15];
    printf("enter the name: ");
    scanf("%s",m);
    size = strlen(m); 
    arr(m);
}
void arr(char *d)
{
    for (int j = 0;j<=size;j++)
    {
        printf("%c",d[j]);
    }
}

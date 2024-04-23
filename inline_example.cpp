#include<stdio.h>
#define add(a,b) (a+b);
inline int mlt(int t,int y)
{
    return t*y;
}
int main()
{
    int a,b,result;
    printf("enter to values to multiple it: ");
    scanf("%d%d",&a,&b);
    result = add(a,b);
    printf("%d",result);
}
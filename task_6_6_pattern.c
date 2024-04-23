#include <stdio.h>

int main()
{
    int range = 6;
    int loop = range/2;
    int o=0,p=0,m=0,r=0;
    int o1=0,p1=1,m1=2,r1=0;
    int d1=0;
    printf("6x6 pattern printing:\n\n");
    for(int i = 1;i<=loop;i++)
    {
        for(int j = range;j>=range-o;j--)
        {
            printf("%d ",j);
        }
        o=o+1;
        for(int k = 1;k<=2-p;k++)
        {
            printf("%d ",range-p);
        }
        p=p+1;
        
        for(int k = 1;k<=2-m;k++)
        {
            printf("%d ",range-m);
        }
        m=m+1;
        for(int b=range-r;b<=range;b++)
        {
            printf("%d ",b);
        }
        r=r+1;
        printf("\n");
    }
    
   for(int i = 1;i<=loop;i++)
    {
        for(int j = range;j>=4+o1;j--)
        {
            printf("%d ",j);
        }
        o1=o1+1;
        
        if(i > 1)
        {
            for(int k = 0;k<=0+d1;k++)
            {
                printf("%d ",range-p1);
            }
            d1=d1+1;
            p1=p1-1;
        }
        
        for(int y=4;y<=range-m1;y++)
        {
            printf("%d ",range-m1);
        }
        m1=m1-1;
        
        for(int j = 5+r1;j<=range;j++)
        {
            printf("%d ",j);
        }
        r1=r1+1;
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int range;
    printf("enter the pattern range: ");
    scanf("%d",&range);
    int ds = range;
    int p = 1;
    int o = 0;
    printf("\n");
    for(int i = 1;i<=range;i++)
    {
        //left top corner
        for(int j = range;j>=range-p+2;j--)
        {
           printf("%d ",j);
        }
        
        //top left half middle 
       for(int k = 0;k<=range-p;k++)
        {
            printf("%d ",ds);
            //printf("%d ",ds);
        }
        p = p+1;
        ds=ds-1;
        
        //top right half middle
        for(int k = 1;k<=range-p;k++)
        {
            printf("%d ",ds+1);
        }
        
        //right top corner
        for(int j = range-o;j<=range;j++)
        {
            if(j!=1)
            {
               printf("%d ",j); 
            }
        }
        o+=1;
       printf("\n");
       
    }
    
    p=range-1;
    ds=2;
    
    for(int i = 1;i<=range-1;i++)
    {
        //left bottom corner
        for(int j = range;j>range-p;j--)
        {
           printf("%d ",j);
        }
        //bottom left half middle
        for(int k = 1;k<=range-p;k++)
        {
            if(ds!=1)
            {
                printf("%d ",ds);
            }
        }
       p = p-1;
       int l = ds;
       ds=ds+1;
    
       //bottom right half middle
       for(int k = 2;k<=range-p;k++)
       {
            printf("%d ",l);
       }
       
       //right botton corner
       for(int op = l+1;op<=range;op++)
       {
           printf("%d ",op);
       }
       l=l-1;
       printf("\n");
    }
   
}






#include <stdio.h>

int main()
{
    //asks user to enter the size os hollow to be printed
    int jd;
    int inter_loop;
    int count;
    printf("halo range: ");
    scanf("%d",&jd);
    
    int gap = jd;
    
    //prints the first half of diamond shaped hollow
    for(int i = 1;i<=jd;i++)//loop for row
    {
        for(int j = gap;j > 0;j--)//loop for out space of hollow
        {
            printf(" ");
        }
        
        gap=gap-1;
        printf("%d",i); //print the row count
        
        int p = i-2;
        for(int in = 1;in < p+i;in++) //loop for inner space of hollow
        {
            printf(" ");
        }
        p++;
        
        if(i != 1) //print the row count except 1
        {
           printf("%d",i); 
        }
        printf("\n");
    }
    
    
    //prints the second half of diamond shaped hollow
    gap=gap+2;
    
    for(int i = jd-1;i>0;i--)//loop for row
    {
        for(int j = 0;j < gap;j++)//loop for outer space of hollow
        {
            printf(" ");
        }
        gap=gap+1;
        
        printf("%d",i); //prints the row count
        
        int p = i-1;
        for(int in = 1;in < p+i-1;in++)//loop for inner space of hollow
        {
            printf(" ");
        }
        p++; 
        
        if(i != 1) //prints row count except 1
        {
           printf("%d",i); 
        }
        printf("\n");
        
    }
}


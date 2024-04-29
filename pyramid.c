#include <stdio.h>

int main()
{
    //declaration of variable 
    int star = 1; 
    int pyramid;
    printf("enter the size of pyramid: ");
    scanf("%d",&pyramid);
    int space = pyramid;
    
    //prints the pyramid shape depence on the size the user entered
    for(int j = 0;j<pyramid;j++) //loop fro row
    {
        for(int i = 1;i<space;i++) //loop for scape
        {
            printf("   ");
        }
        int d=0;
        while(d < star) //loop to print stars (*)
        {
            printf(" * "); 
            d++;
        }
        star=star+2; //increases the number of stars to be printed next time
        space--; //decreases the space taken before printing a stars
        printf("\n"); 
    }
}

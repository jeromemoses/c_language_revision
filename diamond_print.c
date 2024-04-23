#include <stdio.h>

int main()
{
    //declaring variable to store responce from user to repeact the program
    char responce;
    int dummy;
    //using to while loop to repeact the program depence on user decisoion
    
    do{
        int jd = 1;
        int j;
        int di;
        //asks diamond size from user
        printf("enter the size of diamond: ");
        scanf("%d",&di);
        int m = di;
        
        //function which prints the first half of diamond
        for(j = 0;j<di;j++) //loop for row 
        {
            for(int i = 1;i<m;i++) //loop for scape before printing star
            {
                printf("  ");
            }
            int d=0;
            while(d < jd) //loop for printing start accordin to row it prints a amount of stars
            {
                printf(" *");
                d++;
            }
            jd=jd+2;
            m--;
            printf("\n");
        }
        
        //function which prints the second half of the diamond
        jd=jd-2; 
        int minus = 1;
        for(int i = j-1;i>0;i--) //loo[ for row
        {
            for(int i = 0;i<=m;i++)//loop for scape
            {
                printf("  ");
            }
            int d=0;
            while(d < jd-2) //loop for start to be printed according to count of row
            {
                printf(" *");
                d++;
            }
            jd=jd-2;
            m++;
            printf("\n");
        }
        
        //program that asks user to whether repeat the program or dont
        res:
        {
            printf("\n\ndo you want to repeat y = yes , n = no: ");
            scanf("%d",&dummy); //dummy for the inbuil;d bug in compiler that act as dummy
            scanf("%c",&responce);
        }
        
        //if the user responce is not valid this function executes and asks user to decide again
        if (responce != 'y' && responce != 'n')
        {
            printf("\nyour responce is invalid");
            goto res;
        }
    }
    while(responce == 'y');//if the user responce is y (yes) it repeats the program
}

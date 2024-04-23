#include <stdio.h>

int main()
{
    //variable to store row and coloum size
    int row,column;
    
    //asks user to enter the rang of row and coloum
    printf("enter the row and column of 2 dimensional array\n");
    scanf("%d%d",&row,&column);
    
    //creats the two dimention array (2d aray) with the size of row and coloum user has entered
    int two_d_arr[row][column];
    
    //asks user to enter the element of 2d array one by one
    for(int jd=0;jd<=row;jd++)
    {
       for(int ljd =0;ljd<=column;ljd++)
       {
           printf("2 d array[%d][%d]:  ",jd,ljd);
           scanf("%d",&two_d_arr[jd][ljd]);
       }
    }
    
    //prints the value store by user in two dimenional array
    printf("two dimensional array you entered\n");
    for(int jd=0;jd<=row;jd++)
    {
       printf("\n");
       for(int ljd =0;ljd<=column;ljd++)
       {
           printf("%d\t",two_d_arr[jd][ljd]);
       }
    }
    
}
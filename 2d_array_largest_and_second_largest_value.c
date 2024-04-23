#include <stdio.h>

int main()
{
    int row,column;
    int largest,sec_largest;
    printf("enter the row and column of 2 dimensional array\n");
    scanf("%d%d",&row,&column);
    int two_d_arr[row][column];

    for(int jd=0;jd<=row;jd++)
    {
       for(int ljd =0;ljd<=column;ljd++)
       {
           printf("2 d array[%d][%d]:  ",jd,ljd);
           scanf("%d",&two_d_arr[jd][ljd]);
       }
    }
    
    printf("\ntwo dimensional array you entered\n");
    
    for(int jd=0;jd<=row;jd++)
    {
       printf("\n");
       for(int ljd =0;ljd<=column;ljd++)
       {
           printf("%d\t",two_d_arr[jd][ljd]);
       }
    }
    
//largest value identifier
 largest = two_d_arr[0][0];
 int jd,ljd;
 for(jd=0;jd<=row;jd++)
    {
       for(int ljd =0;ljd<=column;ljd++)
       {
           if(two_d_arr[jd][ljd] > largest)
           {
               largest = two_d_arr[jd][ljd];
           }
           else if(two_d_arr[jd][ljd] > sec_largest && two_d_arr[jd][ljd] <  largest)
           {
               sec_largest = two_d_arr[jd][ljd];
           }
       }
    }
for(jd=0;jd<=row;jd++)
    {
       for(int ljd =0;ljd<=column;ljd++)
       {
        if(two_d_arr[jd][ljd] > sec_largest && two_d_arr[jd][ljd] <  largest)
           {
               sec_largest = two_d_arr[jd][ljd];
           }
       }
    }
    printf("\nthe largest value in entered 2 d arra is %d",largest);
    printf("\nthe second largest value in the entertered array is %d",sec_largest);
}

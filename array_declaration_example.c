#include <stdio.h>

int main()
{
    int two_darr[3][3]={{1,2,3},{5,6,7},{8,9,10}};
    for(int jd=0;jd<3;jd++)
    {
       printf("\n");
       for(int ljd =0;ljd<3;ljd++)
       {
           printf("%d\t",two_darr[jd][ljd]);
       }
    }
    
}

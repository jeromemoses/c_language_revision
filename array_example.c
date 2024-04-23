#include<stdio.h>
int main()
{
    //declaring array with initialized size
    int ar[7]; 
    
    //assuming value to array
    ar[0]=7;
    ar[1]=17;
    ar[2]=27;
    ar[3]=37;
    ar[4]=46;
    ar[5]=47;
    ar[6]=57;
    
    //printing the array elements with help of for loop
    for(int jd=0;jd<7;jd++)
    {
        printf("aray[%d] = %d\n",jd,ar[jd]);
    }
    
}

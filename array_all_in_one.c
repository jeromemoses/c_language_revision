#include<stdio.h>
int main()
{
    //receiving array data from user
    int arsize;
    printf("enter the size of array: ");
    scanf("%d",&arsize);
    int ary[arsize];
    for(int jd=0;jd<=arsize;jd++)
    {
        printf("array[%d] : ",jd);
        scanf("%d",&ary[jd]);
    }
    
    //printf the array data
    printf("\ngiven array[%d] =  ",arsize);
    printf("%d",ary[0]);
    for (int j=1;j<=arsize;j++)
    {
        printf(",%d",ary[j]);
    }
    
}

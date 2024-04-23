#include <stdio.h>

int main()
{
   //runing a loop 0 to 4
   int i =0;
   for(i=1;i<5;i++)
   {
       static int y =5; //declaring static integer 
       int p = 10; //declaring normal integer
       //increments the both integer
       y++; 
       p++;
       //prints the incresed value of both intergers
       printf("\nstatic integer y = %d , normal integer p = %d\n",y,p);
   }
}
/*
static integer y = 6 , normal integer p = 11

static integer y = 7 , normal integer p = 11

static integer y = 8 , normal integer p = 11

static integer y = 9 , normal integer p = 11
*/

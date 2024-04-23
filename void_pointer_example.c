#include <stdio.h>

int main()
{
   int jd = 77;
   void *pt;
   pt = &jd;
   //printf("before typecasting %d: ",*pt);
   printf("after typecasting: %d ",*(int *)pt);
}
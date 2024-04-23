#include <stdio.h>  

int main()
{  
    FILE *fp;  
    
   fp = fopen("para.txt", "r");  
   char buff[500];
   
   while(fscanf(fp, "%s",buff) != EOF)
   {  
        printf("%s ", buff );  
   }  
   fclose(fp);  
}  
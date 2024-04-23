#include <stdio.h>
#include<string.h>

int main()
{
    //declaring the file name
    FILE *file;
    char rc; //variable to get the character from the perticular file
    
    //open the mentioned file 
    file = fopen("para to read.txt","r+");

    while(1)
    {
        //fgetc function is use to get the character from the file
        rc = fgetc(file); 
        
        if(rc == EOF)
        {
            break;
        }
        
        //prints the character received from the file
        printf("%c",rc);
    }
    
    //closes the file open 
    fclose(file);
}
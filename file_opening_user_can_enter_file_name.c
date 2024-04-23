#include <stdio.h>
#include<string.h>
int main()
{
    
    int choice_f;
    char file_name[20];
    char format[2];
    //ask the file name to be created
    printf("enter the name of file to be created: ");
    scanf("%s",&file_name);
    
    //ask the format of file to be created 
    printf("choose the format of the file\n1.txt\n2.bin\nchoice: ");
    scanf("%d",&choice_f);
    
    //classifies the format of the file
    if(choice_f == 1)
    {
        strcat(file_name,".txt");
    }
    
    if(choice_f == 2)
    {
        strcat(file_name,".bin");
    }
    
    //copies format name with file name
    strcat(file_name,format);
    
    //creats the file with defined format type by user
    fopen(file_name,"w+");
}
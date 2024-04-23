#include <stdio.h>
#include<string.h>
int main()
{
    int file_data_size;
    int dummy;
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
    
    //creats the file with defined format type
    
    FILE *file = fopen(file_name,"w+");
    
    printf("enter the size of string to going to enter: ");
    scanf("%s",&file_data_size);
    char file_data[file_data_size];
    
    scanf("%d",dummy);
    
    gets(file_data);
    
    fprintf(file,file_data);
    
    fclose(file);
}
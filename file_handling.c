//Creation of a new file (fopen() with attributes as "w" or "w+"
//Opening an existing file (fopen())
//Reading from file (fscanf() or fgets())
//Writing to a file (fprintf() or fputs())
//Moving to a specific location in a file (fseek(), rewind())
//Closing a file (fclose())

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *filepointer;

    char data[100]= "while(ALIVE)\n{\n\tKEEP_LEARNING\n}";

    filepointer = fopen("test.c", "w");

    if(filepointer == NULL)
    {
        printf("File failed to open :(\n");
    }
    else
    {
        printf("This file is opened :)\n");
        if(strlen(data)>0)
        {
            fputs(data, filepointer);
        }
    }

    fclose(filepointer);

    printf("The data is successfully added to a created file\nThe file has been closed");

    return 0;
}
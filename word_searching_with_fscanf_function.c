#include<stdio.h>  
#include<string.h>
int main()
{  
    //declaration of variable
    int count = 0; //varible for word count
    char search[15]; //variable to store search word
    int word_at;//variable to store where the search word is founded at
    
    //ask user to enter the search word
    printf("\nenter the word you want to search: ");
    scanf("%s",search);
    
    
    char buff[10000];//character array to store the data from file
    
    //opens the file name mention in function 
    FILE *fp;  
    fp = fopen("paragraph.txt", "r");  //open a file
    
    //read the string from opened file and return it to array
    while(fscanf(fp, "%s",buff) != EOF)
    {
        count=count+1;//count the number of string present in the file
        
        if(strcmp(buff,search) == 0)
        {
            printf(" /*/");//prints /*/ when the search word is founded in the file
            word_at = count;
        }
        printf("%s ",buff);//prints the string from the file
    }
    //prints the number of word present in the file
    printf("\nword count = %d",count);
    
    //prints position of searched word in the file
    printf("\nyour searched word is at: %d",word_at);
    fclose(fp); 
}  
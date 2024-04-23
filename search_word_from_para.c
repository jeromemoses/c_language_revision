#include<stdio.h>  
#include<string.h>
int main()
{  
    int a=0;
    int count = 0;
    char search[15];
    char rc;
    int sr_size;
    int letters = 0;
    
    printf("\nenter the word you want to search: ");
    scanf("%s",search);
    sr_size = strlen(search);
    char arr[sr_size];
    
    FILE *fp;  
    fp = fopen("paragraph.txt", "r");  
    
    while(1)
    {
        
        rc = fgetc(fp);
        
        if(rc != 32)
        {
            arr[letters] = rc;  
        }
        
        letters = letters+1;
        
        if(rc == 32)
        {
            if(strcmp(arr,search) == 0)
            {
                printf("//");
                count=count+1;
            }
            letters=0;
        }
        
        if(rc == EOF)
        {
            break;
        }
        printf("%c",rc);
        
    }
    
    printf("%s",arr);
    printf("\nword count = %d",count);
    fclose(fp); 
}  
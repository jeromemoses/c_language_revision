#include<stdio.h>

int main()
{
    int a = 0;
    char arr[]={"jerome moses"};
    FILE *fi;
    fi = fopen("dataf.txt","w+");
    
    while(1)
    {
        fputc(arr[a],fi);
        a++;
        if(arr[a] == 0)
        {
            break;
        }
    }
    fclose(fi);
}
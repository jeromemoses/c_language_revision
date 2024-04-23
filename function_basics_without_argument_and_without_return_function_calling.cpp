#include<stdio.h>
#include<string.h>
//function declaration
void print_rev();
void print_mlt();

int main()
{
    //receiving a choice from user to instruct a program whant to do
    int choice;
    printf("\n1.enter you name to reverse print it.\n2.enter your name to print it multiple times.\nyour choice: ");
    scanf("%d",&choice);
    
    //based on a choice calling a function
    if(choice==1)
    {
        print_rev();
    }
    else if(choice == 2)
    {
        print_mlt();
    }
}

//function definition to print in capital 
void print_rev()
{
    char name[15];
    int size;
    printf("enter your name to print it in reverse order: ");
    scanf("%s",&name);
    printf("enter the number of alphabates in your name: ");
    scanf("%d",&size);
    for(int loop = size;loop>=0;loop--)
    {
        printf("%c",name[loop]);
    }
}

//function definition to print it multiple times
void print_mlt()
{
    //receiving a name from user
    int range;
    char name[15];
    printf("enter the name without a space to print it multiple time: ");
    scanf("%s",&name);
    
    //asking a user how many times to print a name
    printf("how many time do you want to print your name: ");
    scanf("%d",&range);
    for(int loop = 1;loop<=range;loop++)
    {
        printf("%d - %s\n",loop,name);
    }
}


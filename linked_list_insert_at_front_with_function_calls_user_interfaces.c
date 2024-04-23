#include <stdio.h>
#include <stdlib.h>

//linked list front insert function declaration
void insert_front(int);

//structure definition
struct node
    {
        int data; //data
        struct node *next; //pointer to next node of the linked list
    };
    
//head structure to to access all the data store in linked list    
struct node *head;

//node inserting function  
void insert_front(int d)
{ 
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = d;
    new->next = head;
    head = new;
}

int main()
{
    //asks user to enter the size of linked list
    int range;
    printf("enter how many values you wanted to insert in linked list: ");
    scanf("%d",&range);
    
    //asks user to enter the data one by one
    for(int j = 1;j<=range;j++)
    {
        int data;
        printf("enter value of %d linked list: ",j);
        scanf("%d",&data);
        //traverses the user entered data to insert_front() function
        insert_front(data);
    }
    
    printf("\n");
    
    //prints the linked list data
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head = head->next;
    }
   
}

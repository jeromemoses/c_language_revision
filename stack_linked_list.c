#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    if(top == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = top;
    }
    top = newNode;
    printf("Node is created successfully\n");
}

int pop()
{
    if(top == NULL)
    {
        printf("\nThe list is empty nothing to POP\n");
    }
    else
    {
        int temp = top->data;
        printf("\nPOPED data :%d",top->data);
        top = top->next;
        return temp;
    }
}

void display()
{
    if (top == NULL)
    {
        printf("\nThe list is empty nothing to display\n");
    }
    else
    {
        struct node *temp = top;
        
        while (temp != NULL)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        
    }
}

int main()
{
    display();
    
    push(777);

    display();

    pop();

    display();

    push(340);
    push(420);
    push(580);
    push(777);
    push(1780);

    display();
}
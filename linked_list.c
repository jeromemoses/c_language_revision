#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_linked_list(struct node *node)
{
    printf("The dat ainsidde the linked list are : \n");
    while(node->next != NULL)
    {   
        printf("%d -> ",node->data);
        node = node->next;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 70;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 77;
    fourth->next = fifth;

    fifth->data = 35;
    fifth->next = NULL;

    print_linked_list(head);

    return 0;
}

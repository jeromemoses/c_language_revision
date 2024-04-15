#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void print_linked_list(struct node *node)
{
    printf("The dat ainsidde the linked list are : \n");
    while(node != NULL)
    {   
        printf("%d -> ",node->data);
        node = node->next;
    }
}

void print_linked_list_reverse(struct node *node)
{
    printf("The dat ainsidde the linked list are : \n");
    while(node != NULL)
    {   
        printf("%d -> ",node->data);
        node = node->prev;
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

    head->prev = NULL;
    head->data = 777;
    head->next = second;

    second->prev = head;
    second->data = 57;
    second->next = third;

    third->prev = second;
    third->data = 43;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 33;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 15;
    fifth->next = NULL;

    print_linked_list(head);

    printf("\n\nprinting in the reverse direction");

    print_linked_list_reverse(fifth);

    return 0;
}

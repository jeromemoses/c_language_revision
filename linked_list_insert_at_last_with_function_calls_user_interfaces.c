#include <stdio.h>
#include <stdlib.h>

//linked list node insert at last function declaration
void insert_last (int);

//structure definition
struct node
{
  int data; //data
  struct node *next;//pointer to next node of linked list
};

//head pointer structure to access all the linked list data
struct node *head;

//linked list inserting a node at last funbction definition 
void insert_last (int d)
{
  struct node *new, *last;
  new = (struct node*) malloc (sizeof (struct node));
  new->data = d;
  //if no linked list is created the below code will be executed
  if (head == NULL)
    {
      new->next = NULL;
      head = new;
    }
  else //if the linked list have some data this code will be executed
    {
        last = head; //stores the linked list in pointer names "last"
        while (last->next != NULL)
	    {
	       last = last->next;  //points the last sturcture to the next node of linked list till the next is NULL
	    }
      last->next = new; //inserts the node at the last of linked list
      new->next = NULL;
    }
}

int main ()
{
    
    //asks user to enter the size range of linked list
    int range;
    printf ("enter how many values you wanted to insert in linked list: ");
    scanf ("%d", &range);
    
    //asks user to enter the data one by one
    for (int j = 1; j <= range; j++)
    {
        int data;
        printf ("enter the data of %d linked list: ", j);
        scanf ("%d", &data);
        insert_last (data);
    }
    
    printf ("\n");
    
    //prints the linked list datas
    while (head != NULL)
    {
        printf ("%d\t", head->data);
        head = head->next;
    }
}
#include <stdio.h>
#include <stdlib.h>

//struct a node fpor liked list 
struct node
{
  int data;
  struct node *next;
};

void print (struct node *p)
{
    //print the data inside the traversed structure's address
  while (p != NULL)
    {
        printf ("%d ", p->data);
        p = p->next; //assigning pointer to next in traversed structure's address
        if(p->data == 3)
        {
            printf("\n");
        }
    }

}

int main ()
{
  //creating 3 pointer structures
  struct node *first;
  struct node *second;
  struct node *third;

  //allocating memory to creater pointer structures with structure node type and size 
  first = (struct node *) malloc (sizeof (struct node));
  second = (struct node *) malloc (sizeof (struct node));
  third = (struct node *) malloc (sizeof (struct node));

  //store the data and next is pointing to another node's address
  first->data = 1;
  first->next = second;

  //store the data and next is pointing to another node's address
  second->data = 2;
  second->next = third;

  //store the data and next is pointing to first node's address
  third->data = 3;
  third->next = first;
  
  //traversing the first node's address to print function
  print(first);

}


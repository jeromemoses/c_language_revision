#include <stdio.h>
#include <stdlib.h>

//structure definition
struct alpha
{
  int data;
  char al;
  struct alpha *next;
};

int main ()
{
    
  int largest = 0;
  struct alpha *a, *b, *c;
  a = (struct alpha*)malloc(sizeof(struct alpha));
  b = (struct alpha*)malloc(sizeof(struct alpha));
  c = (struct alpha*)malloc(sizeof(struct alpha));
  
  a->data=1;
  a->al = 'a';
  a->next=b;
   
  b->data=3;
  b->al = 'b';
  b->next=c;
  
  c->data=4;
  c->al = 'c';
  c->next=NULL;
  
  struct alpha *head;
  head = a;
  char name;
    while(head != 0)
    {
        printf("%c ",head->al);
        if(head->data > largest)
        {
            largest = head->data;
            name = head->al;
        }
        head=head->next;
    }
    printf("\nthe largest value is: %d - %c",largest,name);
}


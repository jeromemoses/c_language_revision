#include <stdio.h>
#include <stdlib.h>

//structure definition
struct node
{
    int data;
    char n_name;
    struct node *next;
};//head node to access all the data in linked list
struct node *head;

//function to creat the node
void creat_node(int,char);

//function to insert the node at front of liked list
void front_insert(int);

//function to l=find the largest value in the linked list
void find_largest();

int main()
{
    //asks user to enter the size of linked list
    int range;
    printf("enter how many element do you want to store: ");
    scanf("%d",&range);
    
    //transvers the size of linked list to "front_insert()"" function
    front_insert(range);
    
    //calls find largest function
    find_largest();
}

void front_insert(int jd)
{
    int dummy;// dummy to over come the scanf function problem 
    for(int j=1;j<=jd;j++)
    {
        //asks the user to enter name and data of the node
        int dt;
        char nm;
        printf("enter the name and data of node: ");
        scanf("%d",&dummy);
        scanf("%c%d",&nm,&dt);
        
        //transvers the name and data to creat_node() function to creat the new node 
        creat_node(dt,nm);
    }
}

void creat_node(int dat,char name)
{
    //structs the new node and stores the data and name at the begin index of thread_local 
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new -> data = dat;
    new -> n_name = name;
    new -> next = head;
    head = new;
}

void find_largest()
{
    //variables to store the largest value and node location name
    char node_location;
    int largest = 0;
    
    //statement to find the largest value in linked list
    while(head!=0)
    {
        //if the data in the linked list is larger than the varibale named "largest" which assigned with value 0
        //then the linked list data will be assign to variable named as "largest"
        if(head->data > largest) 
        {
            largest = head->data; //assign the largest value in linked lin=st to variable named as "largest"
            node_location = head->n_name; //assigns the name of the current node where the largest value is presented
        }
        head = head -> next; //points the head to point at next node
    }
    printf("\n");
    
    //printf the node name and largest value in linked list 
    printf("the node \"%c\" has the largest value: %d",node_location,largest);
}

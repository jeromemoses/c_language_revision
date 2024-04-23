#include <stdio.h>
#include<stdlib.h>

//globle pointer
int *head_ptr = 0;

//function declaration
void mem_allo(int);
void store_element(int);
void add_element(int);
void print(int);

int main()
{
    //asks user to enter the range size of element
    int range;
    printf("enter how many elements do you want to store: ");
    scanf("%d",&range);
    
    //traverses the enter value to mem_allo() function
    mem_allo(range);
    
    //travers the range to print function
    print(range);
}

void mem_allo(int ca)
{
    //allocates the memory by the size which is received by argument of this function
    head_ptr = (int*)malloc(ca*sizeof(int));
    
    //calls the store_element() function and traverses the range size of list
    store_element(ca);
}

void store_element(int d)
{
    //asks user to enter the value one by one
    int data;
    for(int jd = 1;jd <= d;jd++)
    {
        printf("enter the data of pointer index %d: ",jd);
        scanf("%d",&data);
        //traverses the entered data to add_element funtion 
        add_element(data);
    }
}

void add_element(int dat)
{
    //stores the data received by function argument in global pointer (*head_ptr)
    static int s_count = 0;//variables to access pointer's index
    head_ptr[s_count] = dat;
    s_count++;
}

void print(int t)
{
    //print the data user have entered
    int j=0;
    printf("\nvalues assigned to pointer are: \n");
    while(j < t)
    {
        printf("%d\t",head_ptr[j]);
        j++;
    }
}
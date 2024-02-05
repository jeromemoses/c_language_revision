#include<stdio.h>

int MAX_SIZE =10;
int stack[10];
int top = -1;

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int isFull()
{
    if(top ==MAX_SIZE)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int peek()
{
    return stack[top];
}

int pop()
{
    int data;
    if (isEmpty())
    {
        printf("Since the stack is empty nothing can be poped out");
        return -1;
    }
    else 
    {
        data = stack[top];
        top = top-1;
        return data;
    }
    
}

int push(int data)
{
    if(isFull())
    {
        printf("Cant add anymore data im stack as it is already full");
        return -1;
    }
    else
    {
        top = top+1;
        stack[top] = data;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    printf("The top data: %d \n",peek());

    printf("All element presemt in stack are: \n");

    while (!isEmpty())
    {
        int data = pop();
        printf("%d \n",data);
    }

    printf("Stack size Status : %s \n",isFull() ? "FULL" : "NOT FULL");
    printf("Stack Empty status: %s \n",isEmpty() ? "EMPTY" : "NOT EMPTY");
    return 0;
}
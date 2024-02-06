#include<stdio.h>

typedef int position;
typedef int storage;

position front = -1;
position rear = -1;

storage queue[5];

int enqueue(int data)
{
    if(rear == 4)
    {
        printf("The queue is full we can't enqueue any data\n");
        return -1;
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("Inserted value: %d\n",data);
    }
}

int dequeue()
{
    if(front == -1)
    {
        printf("The queue is already empty we cant remove any data\n");
    }
    else
    {
        printf("Removed data: %d\n",queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
        
    }
}

void print()
{
    if (rear == -1)
    {
        printf("Can't print anything the queue is empty ");
    }
    else
    {
        printf("The elements inside the queue are :");
        for(int i = front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    printf("\n");   
}

int main()
{
    dequeue();

    enqueue(70);
    enqueue(50);
    enqueue(40);
    enqueue(30);
    enqueue(10);

    print();

    dequeue();
    
    print();
}
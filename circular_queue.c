#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if((front == -1) && (rear == -1))
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else if((rear+1) % 5 == front)
    {
        printf("Queue is already full\n");
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = data;
    }
}

int dequeue()
{
    if((front == -1) && (rear == -1))
    {
        printf("Queue is empty we cant remove anything");
    }
    else if(rear == front)
    {
        printf("The dequed element is %d",queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe dequeued elemt is %d", queue[front]);
        front = (front +1) % 5;
    }
}

void display()
{
    int i = front;
    if ((front == -1) && (rear == -1))
    {
        printf("Que is empty can display anything");
    }
    else
    {
        printf("Element is the circular queue are :\n");
        while (i <= rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % 5;
        }    
    }
    
}

int main()
{
    enqueue(15);
    enqueue(25);
    enqueue(30);
    enqueue(50);
    
    display();

    dequeue();

    display();
}
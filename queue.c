#include "queue.h"
#include <stdio.h>
int queue[20];
int front = -1;
int rear = -1;
void printQueue()
{
    
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    while (1)
    {
        printf("%d ",queue[i]);
        if(i == rear)
        {
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
    
}
int queueFront()
{
    if(front == -1)
    {
        printf("Queue is empty-1\n");
        return -101;
    }
    if(front == rear + 1)
    {
        printf("Queue is empty-2\n");
        return -101;
    }
    return queue[front];
}
void queueDelete()
{
    if(front == -1)
    {
        printf("Queue is empty-1\n");
        return;
    }
    // if(front == rear + 1)
    // {
        
    //     printf("Queue is empty-2\n");
    //     return;
    // }
    
    front = (front + 1) % MAX;
    if(front == rear)
    {
        front = rear = -1;
        return;
    }
    
}
bool isQueueEmpty()
{
    if(front == -1)
    {
        printf("Queue is empty-1\n");
        return true;
    }
    if(front == rear + 1)
    {
        
        printf("Queue is empty-2\n");
        return true;
    }
    return false;
}
void queueInsert(int value)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is full\n");
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    // printf("%d %d\n",(rear + 1) % MAX, value);
    queue[(rear + 1) % MAX] = value;
    rear = (rear + 1) % MAX;
}

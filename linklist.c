#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>
list* insertFirst(list* front,int v)
{
    list* temp = (list*) malloc(sizeof(list));
    temp -> value = v;
    temp -> next = front;
    return temp;
}
list* deleteFirst(list* front)
{
    if(front == NULL)
    {
        printf("Empty\n");
        return NULL;
    }
    list* temp = front -> next;
    free(front);
    return temp;
}
list* insertLast(list* front, int v)
{
    if(front == NULL)
    {
        list* temp;
        temp = (list*) malloc(sizeof(list));
        temp -> value = v;
        temp -> next = NULL;
        return temp;
    }
    front -> next = insertLast(front -> next, v);
    return front;
}
#include "stack.h"
#include <stdio.h>
#include "linklist.h"
#include <stdbool.h>
list* stack = NULL;
bool isStackEmpty()
{
    return stack == NULL;
}
int peak()
{
    if(stack == NULL)
    {
        return INVALID;
    }
    return stack -> value;
}
void insertStack(int value)
{
    stack = insertFirst(stack,value);
}
void deleteStack()
{
    stack = deleteFirst(stack);
}
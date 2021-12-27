#include <limits.h>
#include "stack.h"

int data[20];
int count = 0;

void push(int x)
{
    data[count++] = x;
}

int pop()
{
    if (!is_empty())
    {
        int val = data[--count];
        return val;
    }

    return INT_MIN;
}

int is_empty()
{
    return count == 0;
}

int size()
{
    return count;
}

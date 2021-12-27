#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node
{
    int data;
    struct Node *next;
};

int items = 0;
struct Node *head = NULL;
struct Node *tail = NULL;

void add_to_head(int x)
{
    struct Node *nd = (struct Node *)malloc(sizeof(struct Node));
    nd->data = x;
    nd->next = head;
    head = nd;
    ++items;
}

void add_to_tail(int x)
{
    struct Node *nd1 = (struct Node *)malloc(sizeof(struct Node));
    nd1->data = x;
    if (head == NULL)
        head = nd1;
    else
        tail->next = nd1;

    tail = nd1;
    ++items;
}

void remove_head()
{
    struct Node *temp = head;
    head = temp->next;

    --items;
    free(temp);
}

int list_count()
{
    return items;
}

void print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void print_reverse_recursive(struct Node *nd)
{
    if (nd == NULL)
        return;

    print_reverse_recursive(nd->next);
    printf("%d\n", nd->data);
}

void print_reverse()
{
    struct Node *temp = head;
    print_reverse_recursive(temp);
}
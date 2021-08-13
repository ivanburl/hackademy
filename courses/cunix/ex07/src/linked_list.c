#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

node_t  *list_create(void *data) 
{
    node_t *tmp;
    tmp = (node_t *) malloc(sizeof(node_t));
    tmp -> data = data;
    tmp -> next = NULL;
    return tmp;
}

void    list_destroy(node_t **head, void (*fp)(void *data)) 
{
    node_t *cur = *head;

    while (cur != NULL) 
    {
        node_t *tmp = cur -> next;
        fp(cur -> data);
        free(cur);
        cur = tmp; 
    }

    head = NULL;
}


void    list_push(node_t *head, void *data) 
{
    node_t *cur = head;
    while (cur -> next != NULL) 
    {
        cur = cur -> next;
    }

    cur -> next = list_create(data);
}

void    list_unshift(node_t **head, void *data) 
{
    node_t *new_head = list_create(data);
    new_head -> next = *head;
    *head = new_head; 
}

void    *list_pop(node_t **head) 
{
    node_t *cur = *head, *tmp = NULL;

    while (cur -> next != NULL) 
    {
        tmp = cur;
        cur = cur -> next;
    }

    void *data = cur -> data;
    free(cur);
    tmp -> next = NULL;

    return data;
}

void    *list_shift(node_t **head) 
{
    node_t *tmp = *head;
    node_t *new_head = tmp -> next;

    void *data = tmp -> data;
    free(tmp);

    *head = new_head;

    return data;
}


void *list_remove(node_t **head, int pos)
{
    if (pos == 0) 
    {
        return list_shift(head);
    }

    node_t *cur = *head;
    node_t *tmp = NULL;

    for (int i = 1; i < pos - 1; ++i) 
    {

        if (cur == NULL) 
        {
            return NULL;
        }
        tmp = cur;
        cur = cur->next;
    }

    tmp -> next = cur -> next;

    void *data = cur -> data;
    free(cur);

    return data;
}

void    list_print(node_t *head) 
{
    node_t *cur = head;
    while (cur != NULL) 
    {
        printf("%s", (char *) cur -> data);
        cur = cur -> next;
    }
}

void    list_visitor(node_t *head, void (*fp)(void *data)) 
{
    node_t *cur = head;
    while (cur != NULL) 
    {
        fp(cur -> data);
        cur = cur -> next;
    }
}

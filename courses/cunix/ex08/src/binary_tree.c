#include"binary_tree.h"
#include<stdlib.h>
#include<stdio.h>

int my_strcmp(char *s1, char *s2) 
{
    while (*s1 == *s2) 
    {
        if (*s1 == '\0') 
        {
            break;
        }
        s1++;
        s2++;
    }

    if (*s1 == *s2) 
    {
        return 0; 
    }
    else
    {
        if (*s1 < *s2) 
        {
            return -1;
        } 
        else 
        {
            return 1;
        }
    }
}

node_t  *allocnode() 
{
    node_t *tmp = malloc(sizeof(node_t));
    tmp -> left = NULL;
    tmp -> right = NULL;
    return tmp;
}

node_t  *insert(node_t *root, char *key, void *data) 
{
    if (root == NULL)
    {
        root = allocnode();
        root -> key = key;
        root -> data = data;
        return root;
    }

    node_t *cur = root, *prev = NULL;


    while (cur) 
    {
        prev = cur;
        int t = my_strcmp(prev -> key, key);
        if (t >= 0)
        {
            cur = cur -> left;
        }
        else
        {
            cur = cur -> right;
        }
    }

    cur = allocnode();
    cur -> key = key;
    cur -> data = data;
    

    int t = my_strcmp(prev -> key, key);
    if (t >= 0) 
    {
        prev -> left = cur; 
    }
    else 
    {
        prev -> right = cur;
    }
    

    return root;
}

void    print_node(node_t *node) 
{
    if (node)
    {
        //if (node -> left != NULL) print_node(node -> left);
        //if (node -> right != NULL) print_node(node -> right);
        printf("%s %s\n", node -> key, (char *) node -> data);
    }
}

void    visit_tree(node_t *node, void (*fp)(node_t *root))
{
    if (node)
    {
        visit_tree(node -> left, fp);
        visit_tree(node -> right, fp);
        fp(node);
    }
}

void    destroy_tree(node_t *node, void (*fdestroy)(node_t *root)) 
{
    if (node)
    {
        destroy_tree(node -> left, fdestroy);
        destroy_tree(node -> right, fdestroy);
        fdestroy(node);
        free(node);
    }
}
#include"binary_tree.h"
#include<stdlib.h>
#include<stdio.h>

node_t  *allocnode() {
    node_t *tmp = (node_t *) malloc(sizeof(node_t));
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}

node_t  *insert(node_t *root, char *key, void *data) 
{
    if (root==NULL)
    {
        root = allocnode();
        root->key=key;
        root->data=data;
        return root;
    }

    node_t *cur = root, *prev = NULL;


    while(cur!=NULL) {
        prev=cur;
        if (*(cur->key)>=*key)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }

    cur = allocnode();
    cur->key=key;
    cur->data=data;
    if (prev!=NULL)
    {
        if (*(prev->key)>=*key) 
        {
            prev->left=cur; 
        }
        else 
        {
            prev->right=cur;
        }
    }

    return cur;
}

void    print_node(node_t *node) {
    if (node==NULL) return;
    if (node->left!=NULL) print_node(node->left);
    if (node->right!=NULL) print_node(node->right);
    printf("%s %s\n",node->key,(char *) node -> data);
}

void    visit_tree(node_t *node, void (*fp)(node_t *root)){
    if (node->left!=NULL) visit_tree(node->left,fp);
    if (node->right!=NULL) visit_tree(node->right,fp);
    fp(node);
}

void    destroy_tree(node_t *node, void (*fdestroy)(node_t *root)) {
    if (node->left!=NULL) destroy_tree(node->left,fdestroy);
    if (node->right!=NULL) destroy_tree(node->right,fdestroy);
    fdestroy(node);
}
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *newNode(int item)
{
    struct node *Node = (struct node*) malloc (sizeof(struct node));
    Node->key = item;
    Node->left = Node->right = NULL;
    return Node;
}

struct node *insert(struct node *node,int key)
{
    if(node == NULL)
    {
        return newNode(key);
    }

    if(key < node->key)
    {
       node->left = insert(node->left,key);
    }

    if(key > node->key)
    {
        node->right = insert(node->right,key);
    }

    return node;
}

void print_tree(struct node *root)
{
    if(root != NULL)
    {
        print_tree(root->left);
        printf("%d-> ",root->key);
        print_tree(root->right);
    }
}

int main()
{
    struct node *root = NULL;

    printf("created ");
    root = insert(root,10);
    root = insert(root,8);
    root = insert(root,35);
    root = insert(root,15);
    root = insert(root,75);

    printf("\nprint starts \n\n ");

    print_tree(root);

    return 0;
}
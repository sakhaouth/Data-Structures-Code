#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
node* insertBST(node* root,int value)
{
    if(root == NULL)
    {
        node* temp = (node*) malloc(sizeof(node));
        temp -> value = value;
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
    }
    printf("%d\n", root -> value);
    if(root -> value <= value)
    {
        root -> right = insertBST(root -> right, value);
    }
    else
    {
        root -> left = insertBST(root -> left, value);
    }
    return root;

}
void inOrderTraversal(node* root)
{
    // printf("Hello\n");
    if(root == NULL)
    {
        return;
    }
    printf("%d\n",root -> value);
    inOrderTraversal(root -> left);
    inOrderTraversal(root -> right);
}
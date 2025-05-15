typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} node;
node* insertBST(node* root,int value);
void inOrderTraversal(node* root);
// void preOrderTraversal(node* root);
// void postOrderTraversal(node* root);
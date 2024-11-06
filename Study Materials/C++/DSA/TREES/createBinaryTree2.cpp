#include <iostream>
#include<queue>
using namespace std;
class node {
    public : 
        int data;
        node* left;
        node* right;
    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printInorder(node->left);
 
    // Then print the data of node
    printf("%d ", node->data);
 
    // Now recur on right child
    printInorder(node->right);
}

int main()
{
    node* root = NULL;
    root=buildTree(root);
    return 0;
}
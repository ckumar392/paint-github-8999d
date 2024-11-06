#include <iostream>
#include<queue>
#include<vector>
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
node *buildTree(node *root)
{
    cout << "Enter the data -->\n";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "Enter the data for left of " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter the data for right of " << data << "\n";
    root->right = buildTree(root->right);
    return root;
}
void displayPre(node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    displayPre(node->left);
    displayPre(node->right);
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay Pre Order--> ";
    displayPre(root);
    return 0;
}

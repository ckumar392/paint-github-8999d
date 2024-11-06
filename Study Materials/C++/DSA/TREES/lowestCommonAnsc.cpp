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
node* lca(node*root, node* f,node* s) //nearest common anscestor
{
    if(root==NULL || root==f || root==s) return root;
    node* l=lca(root->left,f,s);
    node* r=lca(root->right,f,s);
    if(l==NULL) return r;
    else if(r==NULL) return l;
    else return root;
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay PreOrder--> ";
    displayPre(root);
    cout<<"enter the two nodes \n";
    int first,second;cin>>first>>second;
    // lca(root,first,second); cannot give nodes see the code in case first and second were two nodes 
    return 0;
}

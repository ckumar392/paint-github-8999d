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
void disL(node* root,int lev, vector<int>& l)
{
    vector<int> ans;
    if(!root) return;
    if(lev==l.size()) l.push_back(root->data);
    disL(root->left,lev+1,l);
    disL(root->right,lev+1,l);
}
void disR(node* root,int lev,vector<int> &r)
{
    vector<int> ans;
    if(!root) return;
    if(lev==r.size()) r.push_back(root->data);
    disR(root->right,lev+1,r);
    disR(root->left,lev+1,r);
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    int lp=0,rp=0;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay Pre Order--> ";
    displayPre(root);
    vector<int> left,right;
    cout<<"\nDisplay Left view-->\n";
    disL(root,lp,left);
    for(auto x:left) cout<<x<<" ";
    cout<<"\nDisplay Right view-->\n";
    disR(root,rp,right);
    for(auto x:right) cout<<x<<" ";

    
    return 0;
}
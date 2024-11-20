#include<iostream>
#include<stack>
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
void displaypost(node *root)
{
    if (root== NULL)
        return;
    stack<node*> s1,s2; 
    s1.push(root);
    vector<int> ans;
    node* temp=root;
    while(s1.size())
    {
        temp=s1.top();
        s1.pop();
        s2.push(root);
        if(root->left) s1.push(root->left);
        if(root->right) s1.push(root->right);

    }
    while(s2.size())
    {
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    for(auto x:ans)
        cout<<x<<" ";
   
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displaypost(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay PreOrder--> ";
    displaypost(root);
    return 0;
}
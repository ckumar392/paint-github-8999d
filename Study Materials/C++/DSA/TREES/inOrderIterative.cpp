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
void displayin(node *root)
{
    if (root== NULL)
        return;
    stack<node*> st; 
    vector<int> ans;
    node* temp=root;
    while(1)
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        else
        {
            if(st.empty()) break;
            temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            temp=temp->right;
        }
    }
    for(auto x:ans)
        cout<<x<<" ";
   
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayin(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay PreOrder--> ";
    displayin(root);
    return 0;
}
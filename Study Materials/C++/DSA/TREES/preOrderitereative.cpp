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
void displayPre(node *root)
{
    if (root== NULL)
        return;
    stack<node*> st;
    st.push(root);
    vector<int> ans;
    while(st.size())
    {
        node* temp=st.top();
        st.pop();
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
        ans.push_back(temp->data);
    }
    for(auto x:ans)
        cout<<x<<" ";
   
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay PreOrder--> ";
    displayPre(root);
    return 0;
}
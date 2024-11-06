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
void zig(node* root) //its easy just dont panic
{
    vector<vector<int> > ans;
    queue<node*>q;
    q.push(root);
    bool flag =true;
    while(!q.empty())
    {
        int size=q.size();
        vector<int> temp(size);
        for(int i=0;i<size;i++)
        {
            node* cur=q.front();
            q.pop();
            int index=(flag)? i: (size-1-i);
            temp[index]=cur->data;
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);

        }
        flag=!flag;
        ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++)
    { 
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
    }
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "\nDisplay Pre Order--> ";
    displayPre(root);
     cout<<"\nDisplay levelorder-->\n";
     zig(root);
    return 0;
}

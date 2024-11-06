#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d; //here "this" is not compulsary
        this->left = NULL;
        this->right = NULL;
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

void revLevelTraversal(node *root) //BFS
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.back();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "\t";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void printInorder(node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
void printPostorder(node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printInorder(node->right);
    cout << node->data << " ";
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "\t";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // displayPre(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //  cout<<"Display levelorder-->\n";
    //  levelOrderTraversal(root);
    //  cout<<"Display reverse levelorder-->\n";
    //  revLevelTraversal(root);
    cout << "Display In Order--> ";
    printInorder(root);
    cout << "\nDisplay Pre Order--> ";
    displayPre(root);
    cout << "\nDisplay Post Order--> ";
    printPostorder(root);
    cout << "\nDisplay Level Order-->\n";
    levelOrderTraversal(root);
    return 0;
}




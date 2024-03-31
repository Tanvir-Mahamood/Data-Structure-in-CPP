//CSE 1202, Lab Module-8, Tree, Problem(1-4)
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL;

struct Node* insertValue(struct Node* root, int value,queue<Node *>& q)
{
    Node* node = new Node;
    node->data = value;
    node->left = NULL;
    node->right = NULL;

    if (root == NULL) root = node;
    else if (q.front()->left == NULL) q.front()->left = node;
    else
    {
        q.front()->right = node;
        q.pop();
    }

    q.push(node);
    return root;
}

Node* createTree(int arr[], int n)
{
    Node* root = NULL;
    queue<Node*> q;
    for (int i = 0; i < n; i++)
        root = insertValue(root, arr[i], q);
    return root;
}

void preorder(struct Node* root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    queue<Node*> q;
    for (int i = 0; i < n; i++)
    root = insertValue(root, arr[i], q);

    cout<<"Preorder traversal:";
    preorder(root); cout<<endl;

    cout<<"Inorder traversal:";
    inorder(root); cout<<endl;

    cout<<"Postorder traversal:";
    postorder(root); cout<<endl;


    return 0;
}



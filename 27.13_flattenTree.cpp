#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flattenTree(Node *root)
{
    if (root == NULL || root->left == NULL || root->right == NULL)
        return;

    if (root->left != NULL)
    {
        flattenTree(root->left);

        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }

    flattenTree(root->right);
}

void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(7);
    root->right->right = new Node(6);
    flattenTree(root);
    printTree(root);

    return 0;
}
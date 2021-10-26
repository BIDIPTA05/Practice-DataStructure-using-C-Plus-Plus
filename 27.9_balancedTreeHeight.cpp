// Time Complexity O(n^2)

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

//******* Not Optimize Solution **********

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;

    if (isBalanced(root->left) == false)
        return false;

    if (isBalanced(root->right) == false)
        return false;

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
        return true;
    return false;
}

//*******  Optimize Solution **********

bool isBalancedOp(Node *root, int *height)
{
    if (root == NULL)
        return true;

    int lh = 0, rh = 0;

    if (isBalancedOp(root->left, &lh) == false)
        return false;

    if (isBalancedOp(root->right, &rh) == false)
        return false;

    *height = max(lh, rh) + 1;

    if (abs(lh - rh) <= 1)
        return true;
    return false;
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node *rootO = new Node(1);
    rootO->left = new Node(2);
    rootO->left->left = new Node(3);

    if (isBalanced(root)) //Not Optimize
        cout << "Balanced" << endl;
    else
        cout << "Unbalanced" << endl;

    int height = 0;
    if (isBalancedOp(rootO, &height)) // Optimize
        cout << "Balanced" << endl;
    else
        cout << "Unbalanced" << endl;
    return 0;
}
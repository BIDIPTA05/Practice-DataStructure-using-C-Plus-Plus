// Lowest Common Ancesstor
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Method 1 : Here we traverse all the node and save the path of both node and the last common path is LCA

bool getPath(Node *root, int key, vector<int> &path)
{

    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }

    int pathChange;
    for (pathChange = 0; pathChange < path1.size() && pathChange < path2.size(); pathChange++)
    {
        if (path1[pathChange] != path2[pathChange])
        {
            break;
        }
    }

    return path1[pathChange - 1];
}

// Method 2 : Here we check the left node and right node from the root node.

Node *LCA2(Node *root, int n2, int n1)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *leftLCA = LCA2(root->left, n2, n1);
    Node *rightLCA = LCA2(root->right, n2, n1);

    if (leftLCA && rightLCA)
    {
        return root;
    }

    if (leftLCA != NULL)
    {
        return leftLCA;
    }
    return rightLCA;
}

int main()
{
    /*
             1
            / \
           2   3
          /   / \
         4   5    6
            /         
           7
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    int n1 = 7;
    int n2 = 6;
    // Method 1 Call
    // int lca = LCA(root, n1, n2);
    // if (lca == -1)
    // {
    //     cout << "LCA doesn't exist" << endl;
    // }
    // else
    // {
    //     cout << "LCA : " << lca->data << endl;
    // }

    //Method 2 Call
    Node *lca = LCA2(root, n2, n1);

    if (lca == NULL)
    {
        cout << "LCA doesn't exist" << endl;
    }
    else
    {
        cout << "LCA : " << lca->data << endl;
    }

    return 0;
}
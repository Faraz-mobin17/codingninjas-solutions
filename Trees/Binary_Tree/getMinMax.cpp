#include <iostream>
#include <climits>
#include "BinaryTreeNode.h"
using namespace std;
int maximum(Node *root)
{
    if (root == nullptr)
    {
        return INT_MIN;
    }
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}
int minimum(Node *root)
{
    if (root == nullptr)
    {
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}
pair<int, int> getMinAndMax(Node *root)
{
    // Write your code here
    if (root == nullptr)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    int max = maximum(root);
    int min = minimum(root);
    pair<int, int> p;
    p.first = min;
    p.second = max;
    return p;
}
int main(int argc, char const *argv[])
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    getMinAndMax(root);
    delete root;
    return 0;
}
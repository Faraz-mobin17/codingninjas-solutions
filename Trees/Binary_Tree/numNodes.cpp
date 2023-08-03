#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int numNodes(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int ans = 0;
    ans = numNodes(root->left) + numNodes(root->right);
    return (1 + ans); // return 1 + numNodes(root->left) + numNodes(root->right);
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
    numNodes(root);
    delete root;
    return 0;
}
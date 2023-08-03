#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
bool isNodePresent(Node *root, int x)
{
    // Write your code here
    if (root == nullptr)
        return false;
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        Node *front = pendingNodes.front();
        pendingNodes.pop();
        if (front->data == x)
        {
            return true;
        }
        if (front->left != nullptr)
        {
            if (front->left->data == x)
                return true;
            pendingNodes.push(front->left);
        }
        if (front->right != nullptr)
        {
            if (front->right->data == x)
                return true;
            pendingNodes.push(front->right);
        }
    }
    return false;
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
    isNodePresent(root, 3);
    delete root;
    return 0;
}
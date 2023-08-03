#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
void printLevelWise(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        Node *frontNode = pendingNodes.front();
        pendingNodes.pop();
        cout << frontNode->data << ":";
        if (frontNode->left != nullptr)
        {
            cout << frontNode->left->data << ",";
            pendingNodes.push(frontNode->left);
        }
        else if (frontNode->left == nullptr)
        {
            cout << "L:"
                 << "-1"
                 << ",";
        }
        if (frontNode->right != nullptr)
        {
            cout << frontNode->right->data;
            pendingNodes.push(frontNode->right);
        }
        else if (frontNode->right == nullptr)
        {
            cout << "R:"
                 << "-1";
        }
        cout << "\n";
    }
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
    printLevelWise(root);
    delete root;
    return 0;
}
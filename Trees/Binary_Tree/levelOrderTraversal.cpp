#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> pendingNodes;
    pendingNodes.push(root);    // push root node
    pendingNodes.push(nullptr); // and push null to give new line after first node
    while (!pendingNodes.empty())
    {
        Node *front = pendingNodes.front(); // storing the first node
        pendingNodes.pop();                 // removing the node from queue
        if (front == nullptr)               // checking if that node is null if yes
        {
            cout << "\n";              // printing new line
            if (!pendingNodes.empty()) // if queue is not empty push null to queue
            {
                pendingNodes.push(nullptr);
            }
        }
        else
        {
            cout << front->data << " "; // if node is not null print data
            if (front->left != nullptr) //  left child is not null
            {
                pendingNodes.push(front->left); // push left child
            }
            if (front->right != nullptr) // right child is not null
            {
                pendingNodes.push(front->right); // push right child
            }
        }
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
    levelOrderTraversal(root);
    delete root;
    return 0;
}
#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"

Node *takeInputBetter()
{
    // we will use queue to enter data
    cout << "Enter data: ";
    int data;
    cin >> data;
    if (data == -1)
        return nullptr;
    Node *root = new Node(data);
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        Node *front = pendingNodes.front();
        pendingNodes.pop();
    }
}

Node *takeInput()
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    if (data == -1)
        return nullptr;
    Node *root = new Node(data);
    Node *leftChild = takeInput();
    Node *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}
void printTree(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    if (root->left != nullptr)
    {
        cout << "L: " << root->left->data;
    }
    if (root->right != nullptr)
    {
        cout << "R: " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
int main(int argc, char const *argv[])
{
    Node *root = new Node(1);
    Node *node1 = new Node(2);
    Node *node2 = new Node(3);
    // Node *root = takeInput();
    printTree(root);
    delete root;
    return 0;
}
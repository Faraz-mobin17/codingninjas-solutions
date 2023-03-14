#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"

Node *takeInputLevelWise()
{
    // we will use queue to enter data
    int rootData;
    cout << "Enter Data: " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return nullptr;
    }
    Node *root = new Node(rootData);
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        Node *frontNode = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child data of: " << frontNode->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            Node *child = new Node(leftChildData);
            frontNode->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child data of: " << frontNode->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            Node *child = new Node(rightChildData);
            frontNode->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
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
Node *newNode(int data)
{
    Node *newNode = new Node(data);
    return (newNode);
}
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
    // Node *root = new Node(1);
    // Node *node1 = new Node(2);
    // Node *node2 = new Node(3);
    // Node *root = takeInput();
    Node *root = takeInputLevelWise();
    printTree(root);
    delete root;
    return 0;
}
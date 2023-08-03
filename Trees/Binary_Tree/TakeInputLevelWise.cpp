#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
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
int main(int argc, char const *argv[])
{
    Node *root = takeInputLevelWise();
    printTree(root);
    return 0;
}
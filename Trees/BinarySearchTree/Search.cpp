#include <iostream>
#include "queue"
#include "Node.h"
using namespace std;

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
bool searchInBST(Node *root, int k)
{
    if (root == nullptr)
        return false;
    if (root->data == k)
        return true;
    if (k < root->data)
    {
        return searchInBST(root->left, k);
    }
    return searchInBST(root->right, k);
}
int main(int argc, char const *argv[])
{
    Node *root = takeInputLevelWise();
    cout << searchInBST(root, 2);
    return 0;
}

#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
void printNodesWithoutSibling(Node *root)
{
    // Write your code here
    if (root == nullptr)
    {
        return;
    }
    if (root->left != nullptr && root->right == nullptr)
    {
        cout << root->left->data << " ";
    }
    if (root->right != nullptr && root->left == nullptr)
    {
        cout << root->right->data << " ";
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}

Node *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    Node *root = new Node(rootData);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1)
        {
            Node *leftNode = new Node(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1)
        {
            Node *rightNode =
                new Node(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main(int argc, const char *argv[])
{
    Node *root = takeInput();
    printNodesWithoutSibling(root);
    return 0;
}
#include <iostream>
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
int main(int argc, char const *argv[])
{

    Node *root = takeInput();
    printTree(root);
    delete root;
    return 0;
}
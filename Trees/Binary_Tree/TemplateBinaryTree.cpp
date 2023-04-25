#include <iostream>
#include "TemplateBinaryTree.h"
using namespace std;

Node<int> *takeInput() // level wise input
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if (data == -1)
        return NULL;
    Node<int> *root = new Node<int>(data);
    Node<int> *leftChild = takeInput();
    Node<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

void printNode(Node<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printNode(root->left);
    printNode(root->right);
}

int main(int argc, char const *argv[])
{
    // Node<int> *root = new Node<int>(1);
    // Node<int> *node1 = new Node<int>(2);
    // Node<int> *node2 = new Node<int>(3);
    // root->left = node1;
    // root->right = node2;
    Node<int> *root = takeInput();
    printNode(root);
    delete root;
    return 0;
}
#include <iostream>
#include "Node.h"
using namespace std;

// Convert b tree to list 
Node* convertBTreeToList(Node* node) 
{
    // base condition
    Node* head = NULL;
    Node* prev = NULL;
    if (node == NULL) return NULL;
    convertBTreeToList(node->left);
    if (prev == NULL) 
    {
        head = prev = node;
    }
    else 
    {
        node -> left = prev;
        prev -> right = node;
        prev = node;
    }
    convertBTreeToList(node -> right);
    return head;
}

// printing node 
void printList(Node* RootNode) 
{
    while (RootNode != NULL) 
    {
        cout << RootNode -> data << " -> ";
        RootNode = RootNode -> right;
    }
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(12);
    root->left = new Node(7);
    root->left->left = new Node(6);
    root->left->right = new Node(9);
    root->right = new Node(24);
    // Node* head = convertBTreeToList(root);
    // for printing the list of nodes 
    printList(root);
    return 0;
}
#include <bits/stdc++.h>
#include "BinaryTreeNode.h"

using namespace std;

int height(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int main(int argc, char const *argv[])
{
    Node *root_node = new Node(150);
    root_node->left = new Node(250);
    root_node->right = new Node(270);
    root_node->left->left = new Node(320);
    root_node->left->right = new Node(350);
    int ans = height(root_node);
    cout << ans << endl;
    return 0;
}
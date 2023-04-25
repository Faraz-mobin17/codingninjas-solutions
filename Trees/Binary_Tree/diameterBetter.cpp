#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;
pair<int, int> heightDiameter(Node *root)
{
    if (root == nullptr)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int, int> leftAns = heightDiameter(root->left);
    pair<int, int> rightAns = heightDiameter(root->right);
    int leftHeight = leftAns.first;
    int leftDiameter = leftAns.second;
    int rightHeight = rightAns.first;
    int rightDiameter = rightAns.second;
    int maxHeight = 1 + max(leftHeight, rightHeight);
    int finalHeight = leftHeight + rightHeight;
    int maxDiameter = max(finalHeight, max(leftDiameter, rightDiameter));
    pair<int, int> p;
    p.first = maxHeight;
    p.second = maxDiameter;
    return p;
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
    pair<int, int> p = heightDiameter(root);
    cout << "Height: " << p.first;
    cout << "Diameter: " << p.second;
    delete root;
    return 0;
}
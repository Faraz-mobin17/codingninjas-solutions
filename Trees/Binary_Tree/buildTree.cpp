#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;
Node *buildTreeHelper(int *in, int *pre, int inS, int inE, int preS, int preE)
{
    if (inS > inE)
        return nullptr;
    if (preS > preE)
        return nullptr;
    int rootData = pre[preS];
    int rootIndex = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (in[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }
    int lInS = inS;
    int lInE = rootIndex - 1;
    int lPreS = preS + 1;
    int lPreE = lInE - lInS + lPreS;
    int rPreS = lPreE + 1;
    int rPreE = preE;
    int rInS = rootIndex + 1;
    int rInE = inE;
    Node *root = new Node(rootData);
    root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
    root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);

    return root;
}
Node *buildTree(int *in, int *pre, int size)
{
    return buildTreeHelper(in, pre, 0, size - 1, 0, size - 1);
}
int main(int argc, char const *argv[])
{

    int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
    int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};
    Node *root = buildTree(in, pre, 9);

    delete root;
    return 0;
}
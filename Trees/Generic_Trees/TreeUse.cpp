#include <iostream>
#include <climits>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter RootData: " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter number of Children of: " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i += 1)
        {
            int childData;
            cout << "Enter " << i << "th child Data of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Root Node Data:\n";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter how many children will be there of root:\n";
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    if (root == NULL)
        return NULL;
    TreeNode<int> *max = new TreeNode<int>(INT_MIN);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        if (front->data > max->data)
        {
            max = front;
        }
        for (int i = 0; i < front->children.size(); i += 1)
        {
            pendingNodes.push(front->children[i]);
        }
    }
    return max;
}
int sumOfNodes(TreeNode<int> *root)
{
    int ans = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += sumOfNodes(root->children[i]);
    }
    return ans;
}
void printAtLevelK(TreeNode<int> *root, int k)
{
    if (root == nullptr)
        return;
    if (k == 0)
    {
        cout << root->data;
        return;
    }
    for (int i = 0; i < root->children.size(); i += 1)
    {
        printAtLevelK(root->children[i], k - 1);
    }
}
// returns the number of nodes in the tree
int numNodes(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); ++i)
    {
        ans += numNodes(root->children[i]);
    }
    return ans;
}
void printLevelWise(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            if (i < ((front->children.size())) - 1)
            {
                cout << front->children[i]->data << ",";
            }
            else
            {
                cout << front->children[i]->data;
            }
            pendingNodes.push(front->children[i]);
        }
        cout << "\n";
    }
}
void printTree(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main(int argc, char const *argv[])
{
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    // TODO: delete tree
    delete root;
    return 0;
}
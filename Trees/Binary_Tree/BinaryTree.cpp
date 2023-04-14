#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
#include <climits>
class BalancedReturnType
{
public:
    int height;
    bool balanced;
    BalancedReturnType(int height, bool balanced)
    {
        this->height = height;
        this->balanced = balanced;
    }
};

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
Node *newNode(int data)
{
    Node *newNode = new Node(data);
    return (newNode);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int numNodes(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int ans = 0;
    ans = numNodes(root->left) + numNodes(root->right);
    return (1 + ans); // return 1 + numNodes(root->left) + numNodes(root->right);
}
int sumNodes(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftSum = sumNodes(root->left);
    int rightSum = sumNodes(root->right);
    return (root->data + leftSum + rightSum);
}
bool isNodePresent(Node *root, int x)
{
    // Write your code here
    if (root == nullptr)
        return false;
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        Node *front = pendingNodes.front();
        pendingNodes.pop();
        if (front->data == x)
        {
            return true;
        }
        if (front->left != nullptr)
        {
            if (front->left->data == x)
                return true;
            pendingNodes.push(front->left);
        }
        if (front->right != nullptr)
        {
            if (front->right->data == x)
                return true;
            pendingNodes.push(front->right);
        }
    }
    return false;
}
bool isNodePresentBetter(Node *root, int x)
{
    if (root == nullptr)
        return false;
    if (root->data == x)
        return true;
    return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}
void mirrorBinaryTree(Node *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    Node *tmpNodeLeft = root->left;
    root->left = root->right;
    root->right = tmpNodeLeft;
    mirrorBinaryTree(root->left);  // it will give you left child
    mirrorBinaryTree(root->right); // it will give you right child
}
void preOrder(Node *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void inOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
int height(Node *root)
{
    // Write our code here
    if (root == nullptr)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}
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
int diameter(Node *root)
{
    if (root == nullptr)
        return 0;
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1, max(option2, option3));
}
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
void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> pendingNodes;
    pendingNodes.push(root);    // push root node
    pendingNodes.push(nullptr); // and push null to give new line after first node
    while (!pendingNodes.empty())
    {
        Node *front = pendingNodes.front(); // storing the first node
        pendingNodes.pop();                 // removing the node from queue
        if (front == nullptr)               // checking if that node is null if yes
        {
            cout << "\n";              // printing new line
            if (!pendingNodes.empty()) // if queue is not empty push null to queue
            {
                pendingNodes.push(nullptr);
            }
        }
        else
        {
            cout << front->data << " "; // if node is not null print data
            if (front->left != nullptr) //  left child is not null
            {
                pendingNodes.push(front->left); // push left child
            }
            if (front->right != nullptr) // right child is not null
            {
                pendingNodes.push(front->right); // push right child
            }
        }
    }
}
void printLevelWise(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        Node *frontNode = pendingNodes.front();
        pendingNodes.pop();
        cout << frontNode->data << ":";
        if (frontNode->left != nullptr)
        {
            cout << frontNode->left->data << ",";
            pendingNodes.push(frontNode->left);
        }
        else if (frontNode->left == nullptr)
        {
            cout << "L:"
                 << "-1"
                 << ",";
        }
        if (frontNode->right != nullptr)
        {
            cout << frontNode->right->data;
            pendingNodes.push(frontNode->right);
        }
        else if (frontNode->right == nullptr)
        {
            cout << "R:"
                 << "-1";
        }
        cout << "\n";
    }
}
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
int maximum(Node *root)
{
    if (root == nullptr)
        return INT_MIN;
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int minimum(Node *root)
{
    if (root == nullptr)
    {
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}
pair<int, int> getMinAndMax(Node *root)
{
    // Write your code here
    if (root == nullptr)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    int max = maximum(root);
    int min = minimum(root);
    pair<int, int> p;
    p.first = min;
    p.second = max;
    return p;
}
bool isBalanced(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int finalHeight = abs(leftHeight - rightHeight);
    return finalHeight <= 1 && isBalanced(root->left) && isBalanced(root->right);
}
// optimized approach of isBalalnced
BalancedReturnType *isBalancedHelper(Node *root)
{
    if (root == nullptr)
    {
        return new BalancedReturnType(0, true);
    }
    BalancedReturnType *ans1 = isBalancedHelper(root->left);
    BalancedReturnType *ans2 = isBalancedHelper(root->right);
    int finalHeight = abs(ans1->height - ans2->height);
    bool flag;
    if (!(ans1->balanced) || !(ans2->balanced) || finalHeight > 1)
    {
        flag = false;
    }
    else
    {
        flag = true;
    }
    int height = 1 + max(ans1->height, ans2->height);
    return new BalancedReturnType(height, flag);
}

bool isBalanced2(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }
    return isBalancedHelper(root)->balanced;
}
Node *removeLeafNodes(Node *root)
{
    // Write your code here
    if (root == nullptr)
    {
        return root;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        root = nullptr;
        return root;
    }
    Node *updatedLeft = removeLeafNodes(root->left);
    Node *updatedRight = removeLeafNodes(root->right);
    root->left = updatedLeft;
    root->right = updatedRight;
}
int main(int argc, char const *argv[])
{
    // Node *root = new Node(1);
    // Node *node1 = new Node(2);
    // Node *node2 = new Node(3);
    // Node *root = takeInput();
    // Node *root = takeInputLevelWise();
    // printTree(root);
    // int ans = numNodes(root);
    // cout << "Num of nodes: " << ans;
    // int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
    // int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};
    // Node *root = buildTree(in, pre, 9);
    // Node *root = takeInputLevelWise();
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    // printTree(root);
    // cout << "Num: " << numNodes(root) << endl;
    // inOrderTraversal(root);
    // pair<int, int> p = heightDiameter(root);
    // cout << "Height: " << p.first << endl;
    // cout << "Diameter: " << p.second << endl;
    // isBalanced(root);
    levelOrderTraversal(root);
    delete root;
    return 0;
}

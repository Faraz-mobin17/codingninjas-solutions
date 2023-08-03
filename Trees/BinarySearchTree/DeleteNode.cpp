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

Node* getNewNode(int val) {
	Node* newNode = new Node(val);
}

Node* insert(Node* root, int val) {
	if (root == nullptr) {
		return getNewNode(val);
	}
	if (root -> data < val) {
		root -> right = insert(root -> right,val);
	}
	if (root -> data > val) {
		root -> left = insert(root -> left, val);
	}
	return root;
}

void inOrder(Node* root) {
	if (root == nullptr) return;
	inOrder(root -> left);
	printf("%d ", root -> data);
	inOrder(root -> right);
}

int getRightMin(Node* root) {
	Node* temp = root;
	while (temp -> left != nullptr) {
		temp = temp -> left;
	}
	return temp -> data;
}

Node* removeNode(Node* root, int val) {
	if (root == nullptr) return nullptr;
	if (root -> data < val)  {
		root -> right = removeNode(root -> right, val);
	}

	else if (root -> data > val) {
		root -> left = removeNode(root -> left, val);
	}
	else {
		if (root -> left == nullptr && root -> right == nullptr) {
			delete root;
			return nullptr;
		}
		else if (root -> left == nullptr) {
			Node* temp = root -> right;
			delete root;
			return temp;
		}
		else if (root -> right == nullptr) {
			Node* temp = root -> left;
			delete root;
			return temp;
		}
		else {
			int rightMin = getRightMin(root -> right);
			root -> data = rightMin;
			root -> right = removeNode(root -> right, rightMin);
		}
	}
	return root;
}

int main(int argc, char const *argv[])
{
    Node *root = nullptr;
    root = insert(root,100);
    root = insert(root,50);
    root = insert(root,200);
    root = insert(root,150);
    root = insert(root,300);
    
    printf("Initial tree: \t");
    inOrder(root);
    cout << endl;
    root = removeNode(root,300);
    cout << "After deletion of 300, the new tree: \t";
    inOrder(root);
    cout << endl;

    root = removeNode(root,100);
    cout << "After deletion of 100, the new tree: \t";
    inOrder(root);
    cout << endl;

    return 0;
}

#include<iostream>
using namespace std;
#include "Node.h"

Node* getNewNode(int val) {
	Node* newNode = new Node(val);
}

Node* insert(Node* root, int val) {
	if (root == nullptr) {
	   return getNewNode(val);
	}
	if (root == nullptr){ return getNewNode(val); }
	if (root -> data < val) {
		root -> right = insert(root -> right, val);
	}
	else if (root -> data > val) {
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

int main() {

	Node* root = nullptr;
	root = insert(root,100);
	root = insert(root,50);
	root = insert(root,150);
	root = insert(root,50);

	inOrder(root);
	return 0;
}

#include <iostream>
#include <climits>
#include "Node.h"
using namespace std;

class IsBSTReturn
{
public:
	bool isBST;
	int minimum;
	int maximum;
};

IsBSTReturn isBST2(Node *root)
{
	if (root == nullptr)
	{
		IsBSTReturn output;
		output.isBST = true;
		output.minimum = INT_MAX;
		output.maximum = INT_MIN;
		return output;
	}
	IsBSTReturn leftOutput = isBST2(root->left);
	IsBSTReturn rightOutput = isBST2(root->right);
	int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
	int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
	bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && (leftOutput.isBST && rightOutput.isBST);
	IsBSTReturn output;
	output.minimum = minimum;
	output.maximum = maximum;
	output.isBST = isBSTFinal;
	return output;
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

bool isBST(Node *root)
{
	if (root == nullptr)
		return true;
	int leftMax = maximum(root->left);
	int rightMin = minimum(root->right);
	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
	return output;
}

void printFromK1toK2(Node *root, int k1, int k2)
{
	if (root == nullptr)
		return;
	if (root->data > k1 && root->data < k2)
		cout << root->data << " ";
	if (k1 < root->data)
		printFromK1toK2(root->left, k1, k2);
	if (k2 > root->data)
		printFromK1toK2(root->right, k1, k2);
}

bool searchInBST(Node *root, int k)
{
	if (root == nullptr)
		return false;
	if (root->data == k)
		return true;
	if (k < root->data)
	{
		return searchInBST(root->left, k);
	}
	return searchInBST(root->right, k);
}

int main(int argc, char const *argv[])
{
	Node *root = takeInputLevelWise();
	cout << isBST(root) ? "true" : "false";
	return 0;
}

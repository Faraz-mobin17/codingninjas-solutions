class Node
{
public:
    int data;
    Node *left, right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
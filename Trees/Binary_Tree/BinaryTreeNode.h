using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
    ~Node()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};
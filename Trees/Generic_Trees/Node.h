using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
    ~Node()
    {
        cout << "destructor called\n";
        delete left;
        delete right;
    }
};
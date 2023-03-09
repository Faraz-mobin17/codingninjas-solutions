using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *left, *right;
    Node(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    ~Node()
    {
        cout << "Destructor called\n";
        delete left;
        delete right;
    }
};
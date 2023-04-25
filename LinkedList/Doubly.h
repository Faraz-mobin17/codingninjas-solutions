
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    //  creating distructor
    ~Node()
    {
        int value = this->data;
        if (next != nullptr)
        {
            delete next;
            next = nullptr;
        }
        std::cout << "memory free for node with data: " << value << "\n";
    }
};
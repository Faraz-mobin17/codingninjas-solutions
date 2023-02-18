class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
    Node(int data, Node* next, Node* prev) {
        this -> data = data;
        this -> next = next;
        this -> prev = prev;
     }
};
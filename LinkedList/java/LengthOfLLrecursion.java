package LinkedList.java;
class Node {
    int data;
    Node next;
    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
public class LengthOfLLrecursion extends Node {
    LengthOfLLrecursion(int data) {
        super(data);
        //TODO Auto-generated constructor stub
    }
    public static int length(Node head) {
        if (head == null) {

            return 0;
        }
        return 1 + length(head.next);
    }
    public static void main(String[] args) {
        Node firstNode = new Node(10);
        Node secondNode = new Node(20);
        Node thirdNode = new Node(30);
        Node fourthNode = new Node(40);
        firstNode.next = secondNode;
        secondNode.next = thirdNode;
        thirdNode.next = fourthNode;
        int lengthOfLL = length(firstNode);
        System.out.println(lengthOfLL);
    }    
}

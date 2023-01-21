package LinkedList.java;

public class LinkedList {
    int data;
    LinkedList next;
    LinkedList(int data) {
        this.data = data;
        this.next = null;
    }
    public static void print(LinkedList head) {
        while (head != null) {
            System.out.print("Data: " + head.data +  " ");
            head = head.next;
        }
    }
    public static void main(String[] args) {
        LinkedList firstNode = new LinkedList(10);
        LinkedList secondNode = new LinkedList(20);
        LinkedList thirdNode = new LinkedList(30);
        LinkedList fourthNode = new LinkedList(40);
        firstNode.next = secondNode;
        secondNode.next = thirdNode;
        thirdNode.next = fourthNode;
        print(firstNode);
    }
}

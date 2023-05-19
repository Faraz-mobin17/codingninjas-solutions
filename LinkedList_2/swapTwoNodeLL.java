import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class LinkedListNode<T> {
    T data;
    LinkedListNode<T> next;
    
    public LinkedListNode(T data) {
        this.data = data;
    }
}

 class Solution {

	public static LinkedListNode<Integer> swapNodes(LinkedListNode<Integer> head, int i, int j) {
		//Your code goes here
		if (i == j) return head;

		LinkedListNode<Integer> currentNode = head, prev  = null;

		LinkedListNode<Integer> firstNode = null,
		secondNode = null,
		firstNodePrev = null,
		secondNodePrev = null;

		int pos = 0;
		while (currentNode != null) 
		{
			if (pos == i) 
			{
				firstNodePrev = prev;
				firstNode = currentNode;
			}
			else if (pos == j) 
			{
				secondNodePrev = prev;
				secondNode = currentNode;
			}
			prev = currentNode;
			currentNode = currentNode.next;
			pos++;
		}
			if (firstNodePrev != null) 
			{
				firstNodePrev.next = secondNode;
			}
			else 
			{
				head = secondNode;
			}

			if (secondNodePrev != null) 
			{
				secondNodePrev.next = firstNode;
			} else 
			{
				head = firstNode;
			}
			LinkedListNode<Integer> currentfirstNode = secondNode.next;
			secondNode.next = firstNode.next;
			firstNode.next = currentfirstNode;
			return head;
	}
}

public class swapTwoNodeLL {
    
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    public static LinkedListNode<Integer> takeInput() throws IOException {
        LinkedListNode<Integer> head = null, tail = null;

        String[] datas = br.readLine().trim().split("\\s");

        int i = 0;
        while(i < datas.length && !datas[i].equals("-1")) {
            int data = Integer.parseInt(datas[i]);
            LinkedListNode<Integer> newNode = new LinkedListNode<Integer>(data);
            if(head == null) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
            i += 1;
        }

        return head;
    }
    
    public static void print(LinkedListNode<Integer> head){
        while(head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        
        System.out.println();
    }
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        
        int t = Integer.parseInt(br.readLine().trim());

        while (t > 0) {
            
            LinkedListNode<Integer> head = takeInput();
            String[] i_j = br.readLine().trim().split("\\s");

            int i = Integer.parseInt(i_j[0]);
            int j = Integer.parseInt(i_j[1]);

            LinkedListNode<Integer> newHead = Solution.swapNodes(head, i, j);
            print(newHead);
            
            t -= 1;
        }

    }
}
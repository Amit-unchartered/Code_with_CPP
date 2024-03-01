class Node {
    int data;
    Node next;

    Node(int data1,Node next1){
        this.data = data1;
        this.next = next1;
    }
    
    //if our next element is nullpointer
    Node(int data1){
        this.data = data1;
        this.next = null;
    }
};

public class LinkedList {
    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 6};
        Node y = new Node(arr[3]);
        System.out.print(y.data);
    }
}
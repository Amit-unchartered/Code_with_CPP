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

private static Node convertArr2LL(int[] arr){
    Node head = new Node(arr[0]);
    Node mover = head;
    for(int i=1; i<arr.length; i++){
        Node tmp = new Node(arr[i]);
        mover.next = tmp;
        mover = mover.next; // mover = tmp;
    }
    return head;
}

public class LinkedList {
    public static void main(String[] args) {
        int[] arr = {12, 5, 8, 6};
        Node head = convertArr2LL(arr);
        System.out.print(head.data);
    }
}
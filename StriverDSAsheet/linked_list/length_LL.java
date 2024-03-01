class Node {
    int data;
    Node next;
    
    //constructor1 
    Node(int data1, Node next1){
        data = data1;
        next = next1;
    }
    
    //constructor2
    Node(int data1){
        data = data1;
        next = null;
    }
};

public class length_LL {
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

    private static int lenghtOfLL(Node head){
        int cnt = 0;
        Node temp = head;
        while(temp != null){
            temp = temp.next;
            cnt++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        int[] arr = {12, 5, 8, 6};
        Node head = convertArr2LL(arr);
        System.err.println(lenghtOfLL(head));
    }
}

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

public class delete_head {
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

    private static void print(Node head){
        while(head != null){
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
    
    private static Node removesHead(Node head){
        if(head == null) return head;
        head = head.next;
        // OR delete temp ==> to free the heap memory(this is not required in JAVA since there is garbage collection in JAVA)
        //IN JAVA the data is deleted if there is no reference to it during garbage collection or if there is memory issue.
        return head;
    }

    private static Node removeTail(Node head){
        if(head == null || head.next == null) return null; //i.e if there is only one element or no element then by removing the 2nd last element the answer will become NULL.
        Node temp = head;
        while(temp.next.next != null){
            temp = temp.next;
        }
        //delete temp.next; //deleted from the heap memory
        temp.next = null; //now it is pointing towards nullptr
        return head;
    }

    private static Node removeK(Node head, int k){
        if(head == null) return head;
        if(k == 1){
            Node temp = head;
            head = head.next;
            //free(temp);
            return head;
        }
        int cnt = 0;
        Node temp = head;
        Node prev = null;
        while(temp != null){
            cnt++;
            if(cnt == k){
                prev.next = prev.next.next;
                //free(temp);
                break;
            }
            prev = temp;
            temp = temp.next;
        }
        return head;
    }
    
public static void main(String[] args){
    int[] arr = {12, 5, 8, 6};
    Node head = convertArr2LL(arr);
    Node tmp = head;
    
    //while(tmp != nullptr)
    while(tmp != null){
        System.out.print(tmp.data + " ");
        tmp = tmp.next;
    }
}
}
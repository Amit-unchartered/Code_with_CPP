#include<bits/stdc++.h>

class Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    
    //if our next element is nullpointer
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i < arr.size(); i++) {
        Node* tmp = new Node(arr[i]);
        mover->next = tmp;
        mover = mover->next;
    }
    return head;
}

Node* reversingLLrecursive(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newHead = reversingLLrecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head ->next = nullptr;

    return newHead;
}

Node* intersection_of_Y_LL(Node* head1, Node* head2){
    map<Node*, int> mpp;
    Node* tmp = head1;
    while(tmp != NULL){
        mpp[tmp] = 1;
        tmp = tmp->next;
    }
    //TC --> O(N1*1 or  N1*N1) ---> best/average case and worst case

    tmp = head2;
    while(tmp != NULL){
        if(mpp.find(tmp) != mpp.end()){
            return tmp;
        }
        tmp = tmp->next;
        //if entire loop is completed then return NULL
    }
    //TC --> O(N2*logn)
    //SC --> O(N1) OR O(N2)

    return NULL;
}

Node* collisionPoint(Node* t1, Node* t2, int d){
    //O(N2-N1) -->> assuming n2 > n1
    while(d){
        d--;
        t2 = t2->next;
    }
    
    //O(N1) --> N1 is smaller
    while(t1 != t2){
        t1 = t1->next;
        t2 = t2->next;
    }
    return t1; //or return t2 as both are same.
}

//total TC --> O(N1)+O(N2)+O(N2-N1)+O(N1) ==> O(N1+2*N2)
Node* Intersect_Y_LL(Node* head1, Node* head2){
    //TC --> O(N1)
    Node* t1 = head1; int n1 = 0;
    while(t1 != NULL){
        n1++;
        t1 = t1->next;
    }
    
    //TC --> O(N2)
    Node* t2 = head2; int n2 = 0;
    while(t2 != NULL){
        n2++;
        t2 = t2->next;
    }

    if(n1 < n2){
        return collisionPoint(head1, head2, n2-n1);
    }else{
        return collisionPoint(head2, head1, n1-n2);
    }
}

//TC --> O(N1+N2) => WORST CASE i.e if the linked lists don't intersect
//SC --> O(1)
Node* intersect_Y_LL_optimal(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL) return NULL;

    Node* t1 = head1;
    Node* t2 = head2;
    while(t1 != t2){
        t1 = t1->next;
        t2 = t2->next;

        if(t1 == t2) return t1; //or return t2 as they have collided.

        if(t1 == NULL) t1 = head2;
        if(t2 == NULL) t2 = head1;
    }
    return t1; //if both heads are on same LL.
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

using namespace std;
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    head = convertArr2LL(head);

}
  
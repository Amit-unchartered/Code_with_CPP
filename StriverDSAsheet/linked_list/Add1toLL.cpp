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

//TC --> O(3*N) --> we need to optimize this
//SC --> O(1)
Node* add1toLL(Node* head){
    Node* head = reversingLLrecursive(head); //O(N)

    int carry = 1;
    Node* tmp = head;
    while(tmp != NULL){ //O(N)
        int sum = carry;

        tmp->data += carry;
        if(tmp->data < 10){
            carry = 0;
            break;
        }else{
            temp->data = 0;
            carry = 1;
        }
        tmp = tmp->next;
    }

    if(carry == 1){
        head = reversingLLrecursive(head);
        Node* newNode = new Node(1, head);
        return newNode;
    }else{
        head = reversingLLrecursive(head);//O(N)
        return head;
    }
}

int addhelper(Node* tmp){
    if(tmp == NULL) return 1;

    int carry = addhelper(tmp->next);
    tmp->data += carry;

    if(tmp->data < 10){
        return 0;
    }else{
        tmp->data = 0;
        return 1;
    }
}

Node* addOne(Node* head){
    int carry = addhelper(head);

    if(carry == 1){
        Node* newNode = new Node(1, head);
        return newNode;
    }
    return head;
}

/*
Iterative v/s Recursive
1. Iterative : pros:NO space, Cons: tampering data and more time taken
2. Recursive : No tampering of data, addition done in place and in faster time. Cons: extra space.
*/

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
  
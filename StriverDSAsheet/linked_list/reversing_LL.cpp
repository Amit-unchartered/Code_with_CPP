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

//TC --> O(n) + O(n) = O(2n)
//SC --> O(n)
Node* reversingLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* tmp = head;
    stack<int> st;

    while(tmp != NULL){
        st.push(tmp->data);
        tmp = tmp->next;
    }

    tmp = head;
    while(tmp != NULL){
        tmp->data = st.top();
        st.pop();
        tmp = tmp->next;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

//iterative optimal
//TC --> O(N) -->> single pass solution
//SC --> O(1) -->> no external space used
Node* reversingLLOptimal(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* tmp = head;
    Node* prev = nullptr;
    while(tmp != NULL){
        Node* front = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = front;
    }
    return head;
}

//recursive optimal
Node* reversingLLrecursive(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newHead = reversingLLrecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head ->next = nullptr;

    return newHead;
}

using namespace std;
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    head = convertArr2LL(head);


    return 0;
}
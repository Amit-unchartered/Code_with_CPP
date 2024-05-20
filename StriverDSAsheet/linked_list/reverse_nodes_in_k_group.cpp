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

//recursive optimal
Node* reversingLLrecursive(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newHead = reversingLLrecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head ->next = nullptr;

    return newHead;
}

//iterative optimal
//TC --> O(N) -->> single pass solution
//SC --> O(1) -->> no external space used
Node* reversingLLOptimal(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* tmp = head;
    Node* prev = NULL;
    while(tmp != NULL){
        Node* front = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = front;
    }
    return prev;
}

Node* findKthNode(Node* tmp, int k){
    while(tmp != NULL && k>1){
        k--;
        tmp = tmp->next;
    }
    return tmp;
}

//TC --> O(N)+O(N) = O(2N)
//SC --> O(1)
Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* tmp = head;
    Node* prevNode = NULL;
    while(tmp != NULL){
        Node* kthNode = findKthNode(tmp, k);

        if(kthNode == NULL){
            if(prevNode) prevNode->next = tmp;
            break;
        }

        Node* nextNode = kthNode->next;
        kthNode->next = nullptr;
        reversingLLOptimal(tmp);

        if(tmp == head){
            head = kthNode;
        }else{
            prevNode->next = kthNode;
        }

        prevNode = tmp;
        tmp = nextNode;
    }

    return head;

}

using namespace std;
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    head = convertArr2LL(head);


    return 0;
}
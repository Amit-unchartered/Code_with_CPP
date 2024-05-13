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

bool checkifPalindrome(Node* head){
    Node* tmp = head;
    stack<int> st;

    while(tmp != NULL){
        st.push(tmp->data);
    }

    tmp = head;
    while(tmp != NULL){
        if(tmp->data == st.top()){
            st.pop();
            tmp = tmp->next;
        }else return false;
    }
    return true;
}

Node* reversingLLrecursive(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newHead = reversingLLrecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head ->next = nullptr;

    return newHead;
}

bool checkifPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        Node* newHead = reversingLLrecursive(slow->next);

        Node* first = head;
        Node* second = newHead;

        while(second != NULL){
            if(first->data != second->data){
                reversingLLrecursive(slow->next);
                return false;
            }else{
                first = first->next;
                second = second->next;
            }
        }
    }
    reversingLLrecursive(slow->next); //reverse the LL to original as we don't want to tamper the data.
    return true;
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


    return 0;
}
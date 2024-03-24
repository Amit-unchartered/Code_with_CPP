#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* tmp = new Node(arr[i],nullptr,prev);
        prev->next = tmp;
        prev = prev->next;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

//Extreme naive approach
//TC --> O(2N)
//SC --> O(N)
//Two pass solution
Node* reverseDLL(Node* head){
    stack<int> st;
    Node* tmp = head;
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

//One pass solution
//TC --> O(N)
//SC --> O(1)
Node* reverseOptimalDLL(Node* head){
    //If there is only one element
    if((head == NULL) || (head->next == NULL)){
        return head;
    }

    Node* current = head;
    Node* last = nullptr;

    while(current != NULL){
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }
    return last->back;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    //head = reverseDLL(head);
    head = reverseOptimalDLL(head);
    print(head);
    return 0;
}
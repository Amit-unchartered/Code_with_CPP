#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

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

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* addTwoNumbers(Node* num1, Node* num2){
    Node* dummyhead = new Node(-1);
    Node* curr = dummyhead;
    Node* tmp1 = num1;
    Node* tmp2 = num2;
    int carry = 0;
    while(tmp1!=NULL || tmp2!=NULL){
        int sum = carry;
        if(tmp1) sum += tmp1->data;
        if(tmp2) sum += tmp2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;

        curr->next = newNode;
        curr = curr->next;
        if(tmp1) tmp1 = tmp1->next;
        if(tmp2) tmp2 = tmp2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyhead->next;
}

int main()
{
    return 0;
}
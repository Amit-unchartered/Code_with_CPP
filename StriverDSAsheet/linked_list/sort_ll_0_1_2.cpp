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
    for(int i=1; i<arr.size(); i++){
        Node* tmp = new Node(arr[i]);
        tmp = mover->next;
        mover = mover->next;
    }
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    print(head);
    return 0;
}
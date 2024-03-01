#include<bits/stdc++.h>
using namespace std;

class Node {
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
        mover->next = tmp;
        mover = mover->next; // mover = tmp;
    }
    return head;
}

int checkIfPresent(Node* head, int val){
    Node* tmp = head;
    while(tmp){
        if(tmp->data == val) return 1;
        tmp = tmp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {12, 5, 8, 6};
    Node* head = convertArr2LL(arr);
    Node* tmp = head;
    
    //while(tmp != nullptr)
    while(tmp){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    return 0;
}
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
    Node* tmp = head;
    for(int i=1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        tmp->next = newNode;
        tmp = tmp->next;
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

//TC-->O(2N)
//SC-->O(N) --> we need to optimize this solution i.e we can't use any external data structure.
Node* oddEvenLL(Node* head){
    if((head == NULL) || (head->next == NULL)){
        return head;
    }

    vector<int> arr;
    Node* tmp = head;
    while(tmp != NULL){
        arr.push_back(tmp->data);
        tmp = tmp->next;
    }
    //if given sequence is of odd length then last element will not be inserted, so
    if(tmp)  arr.push_back(tmp->data);

    tmp = head->next;
    while(tmp != NULL){
        arr.push_back(tmp->data);
        tmp = tmp->next;
    }
    //if given sequence is of even length then last element will not be inserted, so
    if(tmp) arr.push_back(tmp->data);
    tmp = tmp->next;

    return head;
}

//TC-->O(N/2)*2 ,SC-->O(1)
    Node* oddEvenLLOptimised(Node* head){
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;
    //since even is always ahead odd so, we will put conditions on even only
    while(even != NULL && even->next != NULL){
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    head = oddEvenLL(head);
    print(head);
    return 0;
}
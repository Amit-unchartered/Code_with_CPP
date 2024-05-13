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

Node* sort012(Node* head){
    Node* tmp = head;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    while(tmp != NULL){
        if(tmp->data == 0){
            cnt0++;
        } 
        else if(tmp->data == 1){
            cnt1++;
        }
        else {
            cnt2++;
        }
        tmp = tmp->next;
    }
    tmp = head;

    while(tmp != NULL){
        if(cnt0) {
            tmp->data = 0;
            cnt0--;
    }else if(cnt1){
        tmp->data = 1;
        cnt1--;
    }else{
        tmp->data = 2;
        cnt2--;
    }
    tmp = tmp->next;
    }
    return head;
}

//
Node* sort012_optimal(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* tmp = head;
    while(tmp){
        if(tmp->data == 0){
            zero->next = tmp;
            zero = zero->next;
        }else if(tmp->data == 1){
            one->next = tmp;
            one = one->next;
        }else{
            two->next = tmp;
            two = two->next;
        }
        tmp = tmp->next;
    }
    zero->next = (oneHead->next)?(oneHead->next):(twoHead->next);
    one->next = twoHead->next;
    two->next = NULL;
    Node* newHead = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead;
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
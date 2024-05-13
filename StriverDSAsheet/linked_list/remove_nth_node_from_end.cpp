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

Node* removeNthelfromLast(Node* head, int n){
    int cnt = 0;
    Node* tmp = head;

    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    res = cnt - n;
    //TC --> O(len)
    if(cnt == n){
        Node* newHead = head->next;
        free(head);
        return newHead;
    }

    //TC --> O(len - n)
    //so worst case TC = O(len) + O(len-n) --> O(2*len)
    //SC --> O(1)
    tmp = head;
    while(tmp != NULL){
        res--;
        if(res == 0){
            Node* delNode = tmp->next;
            tmp->next = tmp->next->next;
            free(delNode);
            break;
        }
        tmp = tmp->next;
    }
    return head;
}

Node* removeNthelfromLastOptimal(Node* head, int n){
    //TC --> O(length of LL)
    //SC --> O(1)
    Node* fast = head;
    for(int i=0; i<n; i++){
        fast = fast->next;
    }

    if(fast == NULL){
        Node* newHead = head->next;
        free(head);
        return newHead;
    }

    Node* slow = head;
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }

    Node* delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);

    return head;
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
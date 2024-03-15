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

//TC --> O(1)
Node* Inserthead(Node* head, int val){
    Node* tmp = new Node(val, head);
    return tmp;
}

Node* insertTail(Node* head, int val){
    if (head == NULL){
        return new Node(val);
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    Node* newNode = new Node(val);
    tmp->next = newNode;
    return head;
}

//Inserting element before position k
Node* insertPostion(Node* head, int el, int k){
    if(head == NULL){
        if(k == 1){
            return new Node(el);
        }else{
            return head;
        }
    }

    if(k == 1){
        return new Node(el,head);
    }
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL){
        cnt++;
        if(cnt == (k-1)){
           Node* x = new Node(el,tmp->next);
           tmp->next = x;
           break;
        }
        tmp = tmp->next;
    }
    return head;
}

Node* insertBeforeVal(Node* head, int el, int val){
    if(head == NULL){
        return head;
    }

    if(head->data == val){
        return new Node(el,head);
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->next->data == val){
           Node* x = new Node(el,tmp->next);
           tmp->next = x;
           break;
        }
        tmp = tmp->next;
    }
    return head;
}


int main()
{
    vector<int> arr = {12, 5, 8, 6};
    Node* head = convertArr2LL(arr);
    //head = insertPostion(head, 100, 4);
    head = insertBeforeVal(head,13,8);
    print(head);
    return 0;
}
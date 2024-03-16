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

Node* deleteHead(Node* head){
    if((head == NULL) || (head->next == NULL)){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev; //free the heap memory
    return head;
}

Node* deleteTail(Node* head){
    if((head == NULL) || (head->next == NULL)){
        return head;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

Node* removeKthelement(Node* head, int k){
    Node* tmp = head;
    int cnt = 0; 
    while(tmp != NULL){
        cnt++;
        if(cnt == k) break;
        tmp = tmp->next;
    }
    Node* prev = tmp->back;
    Node* front = tmp->next;
    
    //single element
    if((prev == NULL) && (front == NULL)){
        //delete head;
        return NULL;
    }
    if(prev == NULL){
        return deleteHead(head);
    }
    if(front == NULL){
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;
    tmp->next = nullptr;
    tmp->back = nullptr;
    delete tmp;
    return head;
}

//We need to delete a node in this ques, it is given that the node can't be head
void deleteNode(Node *temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return;
}

//Insertion(before wala case)
Node* insertBeforehead(Node* head, int val){
    Node* newNode = new Node(val, head, nullptr);
    head->back = newNode;
    return newNode;
}

Node* insertBeforetail(Node* head, int val){
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

Node* insertBeforeKthelement(Node* head, int val, int k){
    if(k == 1){
        return insertBeforehead(head, val);
    }
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        if(cnt == k) break;
        tmp = tmp->next;
    }
    Node* prev = tmp->back;
    Node* newNode = new Node(val, tmp, prev);
    prev->next = newNode;
    tmp->back = newNode;
    return head;
}

void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    //head = deleteHead(head);
    //head = deleteTail(head);
    //head =removeKthelement(head, 1);
    //deleteNode(head->next->next);
    //head = insertBeforehead(head, 10);
    //head = insertBeforetail(head, 15);
    //head = insertBeforeKthelement(head, 20, 4);
    insertBeforeNode(head->next->next, 100);
    print(head);
    return 0;
}
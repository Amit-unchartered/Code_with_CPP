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

Node* removesHead(Node* head){
    if(head == NULL) return head;
    Node* tmp = head;
    head = head->next;
    free(tmp); // OR delete temp ==> to free the heap memory(this is not required in JAVA since there is garbage collection in JAVA)
    //IN JAVA the data is deleted if there is no reference to it during garbage collection or if there is memory issue.
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL; //i.e if there is only one element or no element then by removing the 2nd last element the answer will become NULL.
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next; //deleted from the heap memory
    temp->next = nullptr; //now it is pointing towards nullptr
    return head;
}

Node* removeK(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return head;
    }
    int cnt = 0;
    Node* prev = NULL;
    Node* tmp = head;
    while(tmp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(tmp);
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    return head;
}

Node* removeEl(Node* head, int el){
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 6};
    Node* head = convertArr2LL(arr);
    //head = removesHead(head);
    //head = removeTail(head);
    //head = removeK(head, 3);
    head = removeEl(head, 8);
    print(head);
    return 0;
}
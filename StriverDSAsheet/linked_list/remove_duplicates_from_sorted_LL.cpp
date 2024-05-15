#include<bits/stdc++.h>

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

//The given DLL is sorted
Node* remove_duplicates_DLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* tmp = head;

    while(tmp != NULL && tmp->next != NULL){
            Node* newNode = tmp->next;
            while(newNode != NULL && newNode->data == tmp->data){
                Node* duplicate = newNode;
                delete duplicate;
                newNode = newNode->next;
            }
            tmp->next = newNode;
            if(newNode) newNode->back = tmp;

            tmp = tmp->next; //tmp = newNode
    }
    return head; //head has not been altered
}

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

using namespace std;
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    head = convertArr2LL(head);

}
  
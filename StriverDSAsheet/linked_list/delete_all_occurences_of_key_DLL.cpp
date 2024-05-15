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

//TC --> O(N) --> N is number of nodes in DLL
//Sc --> O(1)
Node* delete_all_occurences_ofDLL(Node* head, int key){
    Node* tmp = head;

    while(tmp != NULL){
        if(tmp->data == key){
            if(tmp == head){
                head = head->next;
            }
            Node* nextNode = tmp->next;
            Node* prevNode = tmp->back;

            if(nextNode) nextNode->back = prevNode;
            if(prevNode) prevNode->next = nextNode;

            delete tmp;
        }else{
            tmp = tmp->next;
        }
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
  
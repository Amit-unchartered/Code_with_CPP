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

Node* reversingLLrecursive(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* newHead = reversingLLrecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head ->next = nullptr;

    return newHead;
}


//for odd only one mid, for even two mid are there, we will take next mid
//TC --> O(N+N/2) --> not optimal as it is two pass
//SC --> O(1)
Node* delete_middle_node(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* tmp = head;
    Node* prev = NULL;
    int len = 1;
    while(tmp != NULL){
        len++;
        tmp = tmp->next;
    }

    tmp = head;
    int mid_prev = len/2;
    while(tmp != NULL){
        mid_prev--;
        if(mid_prev == 0){
            Node* midNode = tmp->next;
            tmp->next = tmp->next->next;
            free(midNode);
        }
        tmp = tmp->next;
    }
    return head;
}

//TC --> O(N/2)
//SC --> O(1)
Node* delete_middle_node_optimal(Node* head){
    Node* slow = head;
    Node* fast = head;

    fast = fast->next->next;
    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* midNode = slow->next;
    slow->next = slow->next->next;
    delete midNode;
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
  
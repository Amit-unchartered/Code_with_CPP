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

//TC --> O(N*2*logn)
//SC --> O(N)
Node* Starting_node_in_LL(Node* head){
    Node* tmp = head;
    map<Node*, int> mpp;
    while(tmp != NULL){
        if(mpp.find(tmp) != mpp.end()){
            return tmp;
        }

        mpp[tmp] = 1;
        tmp = tmp->next;
    }
    return NULL; //there is no LOOP in LL, it is a linear DS
}

//for optimal solution we will use fast slow pointers
Node* Starting_node_in_LL_optimal(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow; //return fast; both are same
        }
    }
    return NULL; //there is no loop in LL
}

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

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
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
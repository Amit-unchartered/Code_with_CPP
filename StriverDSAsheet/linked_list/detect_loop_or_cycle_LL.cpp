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

//if there is minimum of one node where i can start and reach back, then loop exist in LL
Node* detect_loop_or_cycle(Node* head){
    map<Node*, int> mpp;
    Node* tmp = head;

    //TC --> O(N*2*logn) => for unordered_map
    //TC --> O(N*2*1) ==> for map
    //SC --> O(N)
    while(tmp != NULL){
        if(mpp.find(tmp) != mpp.end()){
            return true;
        }
        mpp[tmp] = 1; //{tmp,1} --> 1 because we are telling that

        tmp = tmp->next;
    }
    return false; //if there is no loop in LL
}

//optimal algorithm will be tortoise and hare algorithm
//TC --> O(N)
//SC --> O(1)
Node* detect_loop_Optimal(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true; //loop exists in LL
        }
    }
    return false; //it is a linear DS and don't have any loop in it.
}

Node* length_of_loop(Node* head){
    Node* tmp = head;
    int t=1;
    map<Node*, int> mpp;
    while(tmp != NULL){
        if(mpp.find(tmp) != mpp.empty()){
            int value = mpp[tmp];
            return (t-value);
        }

        mpp[tmp] = t++;
        tmp = tmp->next;
    }
    return 0; //
}

Node* length_of_loop_optimal(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            int cnt = 0;
            while(fast != slow){
                cnt++; 
                fast = fast->next;
            }
        }
        return cnt;
    }
    return 0; //there is no LOOP it is a linear data structure.
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
  
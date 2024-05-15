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

// it is a sorted DLL
//TC --> O(N^2) => not exactly but it is near to it
//SC --> O(number of pairs)
vector<pair<int,int>> pairs_with_sum(Node* head, int sum){
    Node* tmp1= head;
    vector<pair<int, int>> ans;

    if(head == NULL || head->next == NULL){
        return NULL;
    }
    while(tmp1 != NULL){
        Node* tmp2 = tmp1->next;
        while(tmp2 != NULL && (tmp1->data + tmp2->data <= sum)){
            if(tmp1->data + tmp2->data == sum){
                ans.push_back(make_pair{tmp1->data, tmp2->data});
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
    return ans;
}

Node* findTail(Node* head){
    Node* tmp = head;

    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    return tmp;
}

//TC --> O(2*N)
//SC --> O(1) ==> used for returning ans not for solving,
vector<pair<int, int>> findPairs_OPTIMAL(Node* head, int k)
{
    vector<pair<int, int>> ans;
    if(head == NULL  || head->next == NULL) return ans;
    Node* left = head;
    Node* right = findTail(head); //TC --> O(N)
                            
    //TC --> O(N)                        
    while(left->data < right->data){
        if(left->data + right->data > k){
            right = right->prev;
        }else if(left->data + right->data < k){
            left = left->next;
        }else{
            ans.push_back(make_pair(left->data, right->data));
            left = left->next;
            right = right->prev;
        }
    }
    return ans;
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
  
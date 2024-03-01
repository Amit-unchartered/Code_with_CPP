#include<bits/stdc++.h>
using namespace std;
//constructors are special types of member functions that are used to initialise objects of the class(self defined datatype)
//it will not help with OOPS, so we need to use class instead of struct.

/*
 template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };
 */

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

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    //Node* y = new Node(arr[0], nullptr);
    Node y = Node(arr[0], nullptr);
    cout << y.data;
    cout << y.next;
    //cout << y->data;
    return 0;
}
//in linked list the elements are not stored in contagious memory locations in the heap memory
//used in stack and queue, in real life used in browser
//1d linked list-->storing the f/w address only.
//browser -->> search --> URL --> a2z (uske baad wapas bhi aa skte hai)
//struct & class both are there in c++
//only class in JAVA
//MEMORY USED --> 32-bit system = int(4 bytes), pointer(4 bytes), 64-bit system = int(4 bytes), pointer(8 bytes)

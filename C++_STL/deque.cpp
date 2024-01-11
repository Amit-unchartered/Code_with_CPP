//The deque stands for Double Ended Queue. Deque is a linear data structure where the insertion and 
//deletion operations are performed from both ends. We can say that deque is a generalized version 
//of the queue.
//There are two types of deque:-
//1.Input restricted queue --> insertion operation can be performed only at one end, while deletion can
//be performed at both ends
//2.Output restricted queue --> deletion operation can be performed only at one end, while insertion can
//be performed at both ends

#include <iostream>
#include <deque>
using namespace std;

int main(){

   deque<int> d;

   d.push_back(1);
   d.push_front(2);

//    for(int i:d) {
//     cout << i << " ";
//    }
//    cout << endl;

//    d.pop_back();//popping from back we must get 2
//    for(int i:d) {
//     cout << i << " ";
//    }
   cout << endl;
   
   cout << "print 1st index element" << d.at(1) << endl;

   cout << "first element-->" << d.front() << endl;
   cout << "last element-->" << d.back() << endl;
   
   cout << "Empty or not-->" << d.empty() << endl;

   //DELETING ELEMENT
   cout << "before erase-->" << d.size() << endl;
   d.erase(d.begin(), d.begin() + 1);
   cout << "after erase-->" << d.size() << endl;

   //checking which value is left
   for(int i:d) {
    cout << i << " ";
   }
   cout << endl;
}


//vector is a dynamic data structure i.e for example if the size of vector is 4 and we filled all
//the four elements and now want to fill the next element then a new vector of double size will be created
//and the old vector will be dumped

//There is contigous memory locations for storing the data

#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   //new vector has size zero
   vector<int> v;
   
   vector<int> a(5, 1);  //vector of size 5, and all the elements = 1
   cout << "Print a" << endl;
   for(int i:a) {
    cout << i << " ";
   }
   cout << endl;

   //making one vector in which i want to copy vector a
   vector<int> last(a);
   cout << "Print last" << endl;
   for(int i:last) {
    cout << i << " ";
   }
   cout << endl;


   cout << "Capacity-->" << v.capacity() << endl;
   
   //capacity ==> for how many elements space is there
   //size ==> how many elements are their in the space
   v.push_back(1);
   cout << "Capacity-->" << v.capacity() << endl;

   v.push_back(2);
   cout << "Capacity-->" << v.capacity() << endl;

   v.push_back(3);
   cout << "Capacity-->" << v.capacity() << endl;
   cout << "Size-->" << v.size() << endl;

   cout << "Element at 2nd index-->" << v.at(2) << endl;

   cout << "first element-->" << v.front() << endl;

   cout << "last element-->" << v.back() << endl; 

   //POPPING BACK
   cout << "befor pop" << endl;
   for(int i:v) {
    cout << i << " ";
   }
   cout << endl;
   
   v.pop_back();

   cout << "After pop" << endl;
   for(int i:v) {
    cout << i << " ";
   }
   cout << endl;
   
   //CLEARING SIZE
   cout << "before clear size-->" << v.size() << endl;
   v.clear();
   cout << "After clear size-->" << v.size() << endl;



}
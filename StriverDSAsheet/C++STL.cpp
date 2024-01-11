#include <bits/stdc++.h>
#include <string>
using namespace std;

//Pairs
void explainPairs() {
    //defining
    pair<int,int> p = {1, 3};
    //accessing
    cout << p.first << " " << p.second << endl;

    //nested property of pair
    pair<int, pair<int, int>> a = {1, {3, 4}};

    //accessing element
    cout << a.first << " " << a.second.second << " " << a.second.first << endl;
    
    //lies inside the utility library
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

void explainVector() {
    
    //singly linked list is maintained for vector
    //we can do things only from one side in vector 

    //declaration of vector ==>vector<datatype> name;
    vector<int> v;

    //vector is dynamic in nature, to give it a element
    
    //it puts 1 inside the vector
    v.push_back(1);
    
    //it dynamically increases the vector size and then puts 2 inside it.
    v.emplace_back(2); 
    
    //emplace_back is faster than push_back

    //we can define vector of pair also
    vector<pair<int,int>> vec;

    //when we use push_back in pair then wee need to use {}
    vec.push_back({1,2});

    //BUT when we use empalce_back we don't use {}
    vec.emplace_back(1,2);

    //making container in a vector
    vector<int> v(5,100); //having 5 instances of 100
 
    //without defining the instances we can just initiate a container
    vector<int> v(5);//it will be storing the garbage values

    vector<int> v1(5, 20);
    //copying vector v1 in some vector v2
    vector<int> v2(v1);

    //ITERATOR
    //=>it points to the memory address where the element is saved not the value
    //syntax ==> vector<datatype>::iterator nameOfIterator
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    //There are some more iterators
    vector<int>::iterator it = v.end();
    //VImp -> This points to memory location just after the last element, so to
    //access the last element we need to do it--

    //accessing element
    cout << v[0] << " " << v.at(0);

    //last element 
    cout << v.back() << " ";

    //Printing the entire vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << endl;
    }                                         

    //auto --> it automatically iterates over the loop, auto means auto assignation
    for(auto it = v.begin(); it != v.end(); it++ ) {
        cout << *(it) << endl;
    }
    
    //iterator using for each loop
    for(auto it:v) {
        cout << it << " ";
    }
    
    //erasing value in vector
    //{10, 20, 12, 13}
    v.erase(v.begin() + 1);//vector will be reshuffled to {10, 12, 13}
    
    //for erasing range of values
    //{10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 3); // v.erase(start, number just after the number you want to delete) 

    //Insert function

    vector<int> v (2, 100);//{100,100}
    v.insert(v.begin(), 300);//{300,100,100}
    v.insert(v.begin() + 1, 2, 10);//{300,10,10,100,100}

    vector<int> copy(2, 50); //{50,50}
    //inserting copy vector in v vector
    v.insert(v.begin(), copy.begin(), copy.end());

    //{10,20}
    cout << v.size() << " ";//2

    //{10,20}
    v.pop_back(); //pops out last element, so v = {10}

    //v1 -> {10, 20}
    //v2 -> {30, 40}
    v1.swap(v2); // Now v1 -> {30, 40} & v2 -> {10, 20}

    v.clear(); //erases the entire vector

    v.empty();//checks i fthe vector is empty, returns false even if one element is present

}

void explainList() {
    //doubly linked list is maintained for lists
    //List manages its elements as a doubly linked list and does not provide random access.
    //In List, inserting and removing elements is fast at each position, including both ends.
    //Inserting and deleting elements does not invalidate pointers, references, and iterators
    // to other elements.

    //we can do things here from front also
    list<int> ls;

    ls.push_back(2); //2
    ls.emplace_back(4);//{2,4} 

    ls.push_front(5); //{5, 2, 4}
    ls.emplace_front(2, 4);

    //rest functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {

    //1.Deque manages its elements with a dynamic array, provides random access,
    // and has almost the same interface as a vector.
    //2.Deque provides Fast insertions and deletions at both the end and the beginning. Inserting and 
    //deleting elements in the middle is relatively slow because all elements up to either of both ends
    // may be moved to make room or to fill a gap
    //3.Deque: Any insertion or deletion of elements other than at the beginning or end invalidates all
    // pointers, references, and iterators that refer to elements of the deque.

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(4); //{4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();

    dq.front();

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack() {
    //linear data structure
    //It follows LIFO -> last in first out 
    //the main three functions in stack are push, pop, top ==> time complexity O(1)
    // In stack, we always keep track of the last element present in the list with a pointer called top.
    
    stack<int> st;
    st.push(1);// {1}
    st.push(2);// {1 ,2}
    st.push(3);// {1, 2, 3}
    st.push(3);// {1, 2, 3, 3}
    st.emplace(5);// {1, 2, 3, 3, 5}

    cout << st.top() << " "; // prints 5 "index accessing is not possible in stack"
    
    st.pop(); //Now st looks like {1, 2, 3, 3}

    cout << st.top(); //3

    cout << st.size(); //4

    cout << st.empty(); //False
    
    //swap
    stack <int> st1, st2;
    st1.swap(st2);
    }

    void explainQueue() {
        //linear data structure  
        //FIFO --> first in first out   
        
        //time complexity ==> push, pop, top --> O(1)

        queue<int> q;

        q.push(1);// {1}
        q.push(2);// {1,2}
        q.emplace(4);// {1,2,4}

        q.back() += 5;

        cout << q.back(); // prints 9

        //Now q is {1, 2, 9}
        cout << q.front(); // prints 1

        q.pop();// {2, 9}

        cout << q.front(); //prints 2

        //size swap empty same as stack
    }

    void explainPQ() {
        //1.A C++ priority queue is a type of container adapter, specifically designed such that the first
        // element of the queue is either the greatest or the smallest of all elements in the queue, 
        //and elements are in non-increasing or non-decreasing order (hence we can see that each element
        // of the queue has a priority {fixed order}).
        //2.not a linear data structure
        //3.STL Priority Queue is the implementation of Heap Data Structure.

        //time complexity => push, pop -> O(logn) ; top -> O(1)

        //MAX HEAP --> the top most element will be the maximum element
        priority_queue<int> pq;

        pq.push(5); //{5}
        pq.push(2); //{5, 2}
        pq.push(8); // {8 ,5, 2}
        pq.emplace(10); // {10, 8, 5, 2} 

        //MIN HEAP --> the top most element will be the minimum element
        priority_queue<int , vector<int>, greater<int>> pq;

        pq.push(5); //{5}
        pq.push(2); //{2, 5}
        pq.push(8); //{2, 5, 8}
        pq.emplace(10); //{2 , 5 ,8 ,10}

        cout << pq.top(); // prints 2
    }

    void explainSet() {
        //The numbers are sorted and all are unique i.e everything will be stored in a sorted fashion
        //Every operation is done in O(logn) time complexity
        set<int> st;
        st.insert(1); //{1}
        st.emplace(2); //{1, 2}
        st.insert(2); //it will not store one more 2, bcoz all numbers need to be unique
        st.insert(4); //{1, 2, 4}
        st.insert(3); //{1, 2, 3, 4}

        //functionality of insert can be used in vector also, that only increases effieciency

        //begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of above

        //{1, 2, 3, 4, 5}
        auto it = st.find(3);// returns it

        //{1, 2, 3, 4, 5}
        auto it = st.find(6);//returns st.end()

        //{1, 4, 5}
        st.erase(5); // erases 5 // takes logarithmic time

        int count = st.count(1); // if 1 exists in the set then it returns 1(as it should be unique) else returns 0
        
        auto it = st.find(3);
        st.erase(it); // it takes constant time

        // {1, 2, 3, 4, 5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2); // after erase {1, 4, 5} [start, end)

        //lower_bound and upper_bound function works in the same way as in vector it does

        //this is the syntax
        auto it = st.lower_bound(2);
        auto it = st.upper_bound(3);

    }

    void explainMultiSet() {
        //Everything same as set
        //only stores duplicate elements also, it is sorted too
        //it stores multiple occurences

        multiset<int> ms;

        ms.insert(1); //{1}
        ms.insert(1); //{1, 1}
        ms.insert(1); //{1, 1, 1}

        ms.erase(1); // all 1's are erased

        //for erasing only a single element we need to pass the element address
        //by using find function

        ms.erase(ms.find(1)); //delete where 1 occured for the first time
    }

    void explainUset(){
        unordered_set<int> st;
        //lower_bound and upper_bound function doesnot works, rest all functions are
        //same as above, it doesnot stores in any particular order it has a better
        //complexity then set in most cases, except some when collison occurs
        //all the occurences take place in O(1) time and can go to O(N) i.e worst case
    }

    void explainMap() {
        
        //map stores unique key in sorted orders

        //key -> int , val -> int
        map<int, int> mpp;

        //key -> int , val  -> int,int
        map<int, pair<int, int>> mpp;

        //key -> int,int, val -> int
        map<pair<int, int>, int> mpp;

        mpp[1] = 2;// in key 1 store 2 ==> they are stored internally in a map
        mpp.emplace(3,1);
        mpp.insert({2,4});        

        mpp[{2,3}] = 10; // this is for the third type

        //looping over map
        for(auto it : mpp) {
            cout << it.first << " " << it.second << endl;
        }

        cout << mpp[1];//for key 1 what is the value
        cout << mpp[5];//since there is no key 5 therefore it prints 0;

        //for accesing the iterator
        auto it = mpp.find(3);
        cout << *(it).second;

        auto it = mpp.find(5);//this will return mpp.end() i.e element just after the map

        //this is the syntax
        auto it = mpp.lower_bound(2);
        auto it = mpp.upper_bound(3);
    }

    void explainMultiMap() {
        //everything same as map, only it can store multiple keys
        //only map[key] cannot be used here
        //we can have duplicate keys, and in sorted order
    } 

    void explainUnorderedMap() {
        //same as set and unordered set difference
        //map operates in O(logn) but unordered map works in O(1) and O(N){for worst time}
    }
    


    //just pickup two pairs and analyse every possible case between them
    bool comp(pair<int, int> p1, pair<int, int> p2) {
         if(p1.second < p2.second) return true;
         if(p1.second > p2.second) return false;

         //now if they are same
         if(p1.first > p2.first) return true;
         return false;
    }


    void explainExtra() {
        int n;
        int a[n];
        vector<int> v;
        sort(a, a+n); // size of array

        sort(v.begin(), v.end());

        //for sorting a particular range
        sort(a+2, a+4);

        //for sorting in descending order
        sort(a, a+n, greater<int>()); //greater is inbuilt comparator

        //most of the time I want it to sort my way
        pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
        //sort it according to second element
        //if second element is same, then sort it according to first element but in
        //descending order

        sort(a, a+n, comp);//comp is a self written comparator of bool type 
        //{4,1}, {2,1}, {1,2}

        int num = 7;
        int cnt = __builtin_popcount(); //returs number of set(1) bits in the number's binary representation

        //if num is long long
        long long num = 2145258923190;
        int cnt = __builtin_popcountll();

        //finding total number of permutations of a string
        string s = "123";
        sort(s.begin(), s.end());// this is if the string is unsorted

        do{
            cout << s << endl;
        } while(next_permutation(s.begin(), s.end()));

        //for finding maximum element in the array, vector

        int maxi = *max_element(a, a+n);


    } 

int main() {
    explainPairs();
}
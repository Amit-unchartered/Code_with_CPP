/*
1D problems

->count the number of problems
->There are multiple ways of doing something, we need to take out which is giving minimum or maximum output
->Whenever there is concept of try all possible ways --> count or figure out the best way, thats whe we try to apply recursion.

(Shortcut)
1. try to represent the problem in terms of indexes
2. Do all possible stuffs on that index according to the problem statement.
3. sum of all ways --> count of all stuffs
   min(of all stuffs) --> find min
*/

#include<bits/stdc++.h>
using namespace std;

int f(int ind){
    if(ind==0 || ind==1)return 1;

    int left = f(ind-1); //by 1 step
    int right = f(ind-2); //by 2 step

    return left+right;
}

int main()
{
    return 0;
}
//stack is LIFO
#include<bits/stdc++.h>
using namespace std;
void push(int &arr, int x, int top){
    arr[++top] = x;
}

void pop(int top){
    top--;
}

int top(int &arr, int top){
    return arr[top];
}

int size(int top){
    return top+1
}

bool isEmpty(int top){
    return(top==-1);
}
int main()
{
    int arr[5];
    top = -1;
    return 0;
}
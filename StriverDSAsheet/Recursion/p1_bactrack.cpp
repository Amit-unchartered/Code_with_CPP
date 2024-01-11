#include<bits/stdc++.h>
using namespace std;

void func(int i, int N){
    if (i < 1) return;
    func(i-1,N);
    cout << i << endl;
}

int main()
{
    int N;
    cin >> N;
    func(N,N);
}
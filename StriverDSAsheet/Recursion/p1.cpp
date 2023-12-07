#include<bits/stdc++.h>
using namespace std;

void func(int i, int N){
    if (i > N) return;
    cout << i << endl;
    i++;
    func(i,N);
}

int main()
{
    int N;
    cin >> N;
    func(1,N);
}
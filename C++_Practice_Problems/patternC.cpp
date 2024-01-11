#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
int i = 1;

while (i <=n)
{
    int j = 1;
    while (j <= n)
    {
        cout << n+1-j;
        j++;
    }
    cout << endl;
    i++;
}


}
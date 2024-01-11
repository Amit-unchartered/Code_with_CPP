#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here
    sort(book.begin(), book.end());

    int left = 0, right = n-1;
    int sum;
    while(left < right){
        sum = book[left] + book[right];

        if(sum == target){
            return "YES";
        }
        else if (sum < target) {
            left++;
        }
        else right--;
    }
    return "NO";
}

int main()
{
    int n;cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int target; cin >> target;

    string s = read(n,arr,target);

    cout << s << endl;
    return 0;
}
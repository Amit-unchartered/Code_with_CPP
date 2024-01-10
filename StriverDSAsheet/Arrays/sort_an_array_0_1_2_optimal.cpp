//Dutch National Flag Algorithm
#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++; low++;
        } else if (arr[mid] == 1) {
            mid++;
        }else if(arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    }

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    sortColors(arr);

    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
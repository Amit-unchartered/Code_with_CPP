#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int ans[]) {
    int i = 0, j = 0, k = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            k++;
            i++;
        }else{
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(i == m) {
        while(j < n) {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }else if(j == n) {
        while(i < m) {
            ans[k] = arr1[i];
            k++;i++;
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int size1;
        cin >> size1;

        int *arr1 = new int[size1];

        for(int i = 0; i < size1; i++) {
            cin >> arr1[i];
        }

        int size2;
        cin >> size2;

        int *arr2 = new int[size2];

        for(int i = 0; i < size2; i++) {
            cin >> arr2[i];
        }

        int *ans = new int[size1 + size2];

        merge(arr1, size1, arr2, size2, ans);
        printArray(ans, (size1 + size2));
    }

}
#include<bits/stdc++.h>
using namespace std;

//overcflow case--> if the search space is till INT_MAX, not beyond that then write mid = high + (high-low)/2;
int binarySearch(int &input, int n, int val)
{
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] == val) return mid;
        else if (val < input[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int binarySearch_recursice(int &input, int low, int high, int val)
{
    if(low > high) return -1;

    int mid = (low+high)/2;

    if(input[mid] == val) return mid;
    else if(val > input[mid]) binarySearch_recursice(input, mid+1, high, val);
    else return binarySearch_recursice(input, low, mid-1, val);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 10;
    int result = binarySearch(arr, n, val);
    cout << "Element is " << (result == 1 ? "present" : "not present") << " in array" << endl;
    return 0;
}
#include <iostream>
using namespace std;

void bubbleSort(int input[], int n) {
    for(int i = 0; i < n - 1; i++ ) {
    for(int j = 0; j+1 < n; j++) {
        if(input[j] > input[j+1]) {
            int temp = input[j];
            input[j] = input[j+1];
            input[j+1] = temp;
        }
    }
    }
}

int main() {
    int input[] = {10, 1, 7, 9, 14, 5};
    bubbleSort(input, 6);
    
    for (int i = 0; i < 6; i++) {
        cout << input[i] << " ";
    }
cout << endl;

}
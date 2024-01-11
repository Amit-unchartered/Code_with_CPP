#include <iostream>
using namespace std;

void printArray(int input[], int n){
    //cout << "Function : " << sizeof(input) << endl;
    
    cout << "Print : ";
    for(int i = 0; i < n; i++){
        
        cout << input[i] << " ";
    }
     
    cout << endl;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    // int input[n]; we will never create an array of variable length, always make array of 
    // constant size

    int input[100];

    cout << input << endl;
    //it will give the memory address of the first index element
    //it is stored in the hexadecimal(0x tells that it is hexadec) format

    //taking input for the array

   cout << "Enter array elements : " ;
    for(int i = 0; i < n; i++){
        cin >> input[i]; // i is the index of the current element
    }
    
    //calling the function
    printArray(input, n);

    cout << "Size of input inside Main : " << sizeof(input) << endl;

    /*
    //printing the elements of the array
    for(int i = 0; i < n; i++){
        cout << input[i] << endl;
    }

    //Experiment
    for(int i = 0; i < 100; i++){
        cout << input[i] << endl;
    }
    //the numbers will be printed till n only rest all will be garbage values
*/
}

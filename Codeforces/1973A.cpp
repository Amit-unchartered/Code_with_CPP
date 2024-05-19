// #include<bits/stdc++.h>
// using namespace std;

// void findMaxAndSecondMax(int a, int b, int c, int &max, int &secondMax) {
//     // Initialize max and secondMax
//     if (a >= b && a >= c) {
//         max = a;
//         secondMax = (b >= c) ? b : c;
//     } else if (b >= a && b >= c) {
//         max = b;
//         secondMax = (a >= c) ? a : c;
//     } else {
//         max = c;
//         secondMax = (a >= b) ? a : b;
//     }
// }


// int main()
// {

//     int t; cin >> t;
//     int maxi , secondMaxi;
//     int draw = 0;
//     while(t--){
//         int p1, p2, p3;
//         cin >> p1 >> p2 >> p3;
//         maxi=0 , secondMaxi=0;
//         if(p1+p2+p3 == 0){
//             cout << 0 << endl;
//         }else if((p1+p2+p3)%2 != 0){
//             cout << -1 << endl;
//         }else{
//             findMaxAndSecondMax(p1,p2,p3,maxi,secondMaxi);

//         while(secondMaxi != 0){
//             draw++;
//             secondMaxi--;
//             maxi--;
//         }

//         p1=maxi;
//         p2=secondMaxi;
//         findMaxAndSecondMax(p1,p2,p3,maxi,secondMaxi);
//         while(secondMaxi != 0){
//             draw++;
//             secondMaxi--;
//             maxi--;
//         }
//         cout << draw << endl;
//     }
// }

        
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void findMaxAndSecondMax(int a, int b, int c, int &max, int &secondMax) {
    // Initialize max and secondMax
    if (a >= b && a >= c) {
        max = a;
        secondMax = (b >= c) ? b : c;
    } else if (b >= a && b >= c) {
        max = b;
        secondMax = (a >= c) ? a : c;
    } else {
        max = c;
        secondMax = (a >= b) ? a : b;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if (p1 + p2 + p3 == 0) {
            cout << 0 << endl;
            continue;
        }
        if ((p1 + p2 + p3) % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int draw = 0;
        int maxi = 0, secondMaxi = 0;

        while (true) {
            findMaxAndSecondMax(p1, p2, p3, maxi, secondMaxi);
            if (secondMaxi == 0) break; 

            draw++;
            if (p1 == maxi) p1--;
            else if (p2 == maxi) p2--;
            else if (p3 == maxi) p3--;

            if (p1 == secondMaxi) p1--;
            else if (p2 == secondMaxi) p2--;
            else if (p3 == secondMaxi) p3--;
        }

        cout << draw << endl;
    }

    return 0;
}

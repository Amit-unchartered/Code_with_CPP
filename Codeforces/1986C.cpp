// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin >> t;

//     while(t--){
//         int n,m; cin >> n >> m;
//         string s; cin >> s;

//         vector<int> a(m,0);
//         for(int i=0; i<m; i++){
//             cin >> a[i];
//         }

//         string s1; cin >> s1;
//         sort(s1.begin(), s1.end());
//         map<int, int> mpp;

//         for(auto it:mpp){
//             mpp[it]++;
//         }

//         int extra = 0;
//         for(auto it:mpp){
//             extra += it.second-1;
//         }

//         s1 = s1.substr(0, m-extra);
//         int i=0;
//         for(auto it:mpp){
//             int posi = it.first;
//             s[posi-1] = s1[i];
//             i++;
//         }
//         cout << s << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        string s1;
        cin >> s1;
        sort(s1.begin(), s1.end());

        map<int, int> mpp;

        for (int i = 0; i < m; i++) {
            mpp[a[i]]++;
        }

        int naya = 0;
        for (auto it : mpp) {
            naya += it.second - 1; 
        }

        s1 = s1.substr(0, m - naya);

        int i = 0;
        for (auto &it : mpp) {
            int posi = it.first;
            s[posi - 1] = s1[i];
            i++;
        }

        cout << s << endl;
    }

    return 0;
}

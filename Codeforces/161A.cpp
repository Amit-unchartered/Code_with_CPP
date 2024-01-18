#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;

    int cnt = 0;
    int cnt1 = 0;
    for(int i = 0 ; i<n; i++) {
        

        // if(s1[i] == s3[i]){
        //     cnt1++;
        // }
    }
    if(s1 == s3 || s2 == s3){
            cout << "NO" << endl;
            return;
    }else{
        // if(s1 != s2){
        //     for(int i = 0 ; i<n; i++){
//                 if(s1[i] == s2[i]){ cnt ++; }else{
//                     cnt1++;
//                 }
//             }
//             if(cnt1 == n){
//                 cout << "YES" << endl;
//                 return;
//             } 

//             if(cnt > 1){
//         cout << "YES" << endl;
//         return;
//     }else{
//         cout << "NO" << endl;
//         return;
//     }
//   }
for(int i=0;i<n;i++)
{
    if(s1[i]==s2[i])
    {
        if(s2[i]!=s3[i])
        {
            continue;
        }
    }
    else{
        if(s3[i]==s1[i] || s3[i]==s2[i])
        {
            cnt=1;
            break;
        } 
    }
}
if(cnt==1)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
}
}
//     if(s1.length() == 1){
//         cout << "YES" << endl;
//         return;
//     }
//         }

//     }

    

// if(n % 2 == 0){
//     if(cnt >= n/2){
//         cout << "YES" << endl;
//     }else {
//         cout << "NO" << endl;
//     }
// }else{
//     if(cnt >= n/2 +1){
//         cout << "YES" << endl;
//     }else{
//         cout << "NO" << endl;
//     }
// }




int main(){
    int t ;
    cin >> t;

    while(t--){
        solve();
    }
}
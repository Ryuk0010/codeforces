#include <bits/stdc++.h>
using namespace std;


void solve(){
    int len;
    cin >> len;
    int arr[len] = {0};
    int freq[26] = {0};
    string ans = "";
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 26; j++){
            if(arr[i] == freq[j]){
                ans += (char) ('a' + j);
                freq[j] = freq[j] + 1;
                // cout << freq[j] <<" ";
                break;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }   
return 0;
}
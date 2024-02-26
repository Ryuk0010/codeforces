#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m , k;
    cin >> n >> m >> k;
    unordered_set<int> st1, st2;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        st1.insert(a);
    }
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        st2.insert(a);
    }
    int cnt1 = 0, cnt2 = 0;
    bool notfind = 0;
    for(int i = 1; i <= k; i++){
        if(!st1.count(i) && !st2.count(i)) notfind = 1;
        cnt1 += st1.count(i);
        cnt2 += st2.count(i);
    }
    if(notfind == 1) cout << "NO" << endl;
    else if(min(cnt1, cnt2) >= k/2) cout << "YES" << endl; 
    else cout << "NO" << endl;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }   
return 0;
}
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<char> v[27];
    char ch = 'a';
    for(int i = 1; i < 27; i++){
        v[i] = ch + 1;
    }
    if(n <= 28){
        cout << "aa";
        int temp = n - 2;
        cout << v[temp] << endl;

    }
    else if(n <= 53){
        cout << 'a';
        n -= 26;
        int temp = n - 1;
        cout <<v[temp] << 'z' << endl;
    }
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }   
return 0;
}
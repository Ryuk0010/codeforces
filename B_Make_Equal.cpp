#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin >> n;
    // cout << n <<" ";
    int flag = 1;
    int arr[n] = {0};
    int avg = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        avg += arr[i];
    }

    avg /= n;
    int ind = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] < avg){
            ind = i;
            break;
        } 
    }

    for(int i = ind + 1; i < n; i++){
        if(arr[i] > avg){
            flag = 0;
        }
    }
    if (n == 1) {
        return flag;
    }
    return flag;    
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        // cout << tc << " ";
        if(solve() == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        // tc--;
    } 
      
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool checkI(int i, int rb, int rs, int rc, int nb, int ns, int nc, int pb, int ps, int pc, int r){
        int nb_ = rb*i - nb;
        int ns_ = rs*i - ns;
        int nc_ = rc*i - nc;
        if(nb_ < 0)
            nb_ = 0;
        if(ns_ < 0)
            ns_ = 0;
        if(nc_ < 0)
            nc_ = 0;

        int pb_ = nb_ * pb;
        int ps_ = ns_ * ps;
        int pc_ = nc_ * pc;

        int total = pb_ + ps_ + pc_;

        if(total <= r) return true;
        return false;
}

int solve(){
    string s;
    cin >> s;
    int nb,ns,nc;
    cin >> nb >> ns >> nc;
    int pb,ps,pc;
    cin >> pb >> ps >> pc; 
    int r;
    cin >> r;
    int rb = 0, rs = 0, rc = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='B') rb++;
        else if(s[i]=='S') rs++;
        else rc++;
    }

    int ans = 0;
    int left = 0, right = 1e14;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(checkI(mid,rb,rs,rc,nb,ns,nc,pb,ps,pc,r)==true){
            ans = mid;
            left = mid+1;
        } else{
            right = mid-1;
        }
    }
    return ans;
}

int32_t main(){
    int ans = solve();
    cout << ans << endl;
    return 0;
}
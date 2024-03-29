#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n , k ;
        cin >> n >> k ;

        vector<ll> cost(n) , total(n) ;
        for(auto &x : cost){
            cin >> x ;
        }
        for(auto &x : total){
            cin >> x ;
        }
        ll low = 0 , high = 1e10   ;
        ll ans = -1 ;

        while(low <= high){

            ll mid = (low + high) / 2 ;
            bool posisble = true ;

            ll ase = k ;

            for(int i = 0 ; i < n; i++){
                ll lagbe = cost[i] * mid ;

                if(lagbe > total[i]){
                    ase -= (lagbe-total[i]) ;
                }

                if(ase < 0){
                    posisble = false ;
                    break; 
                }
            }

            if(posisble){
                ans = mid ;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }

        cout << ans << endl ;


    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

bool isprimo(ll v){
    for(ll i = 2; i*i <= v; i++){
        if(v%i == 0) return false;
    }
    return true;
}

void solve() {
    ll total = 0;
    ll n; cin >> n;

    for(ll i = n*n; i <= (n+1)*(n+1); i++){
        if(isprimo(i)){
          total++;  
        } 
    } 
    cout << total << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
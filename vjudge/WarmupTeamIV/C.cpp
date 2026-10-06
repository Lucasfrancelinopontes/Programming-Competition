#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; 
    cin >> n;
    ll vp; 
    cin >> vp; 
    ll ans = 1;
    int dir = 0; 

    for (ll i = 1; i < n; i++) { 
        ll va; 
        cin >> va;

        if (va > vp && dir != 1) {
            dir = 1;   
            ans++;     
        } 
        else if (va < vp && dir != -1) {
            dir = -1; 
            ans++;    
        }

        vp = va; 
    }

    cout << ans << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
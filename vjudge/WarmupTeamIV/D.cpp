#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,q; cin >> n >> q;
    vector <int> a(n+1,0);
    ll soma = 0;

    for(ll i = 1; i <= n; i++){
        ll va; cin >> va;
        soma+=va;
        a[i] = soma;
    }
    while(q--){
        ll l,r,k; cin >> l >> r >> k;

        ll ants = a[r] - a[l-1];
        ll s = a[n] -ants + (r-l+1)*k;

        if(s&1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;

    for(ll i = 1; i <=n; i++){
        ll i1 = 2*i-1;
        ll i2 = 2*i+1;

        cout << i1*i2 << " ";
    }
    cout << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
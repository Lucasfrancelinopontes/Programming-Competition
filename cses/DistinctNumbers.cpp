#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;

    set <ll> x;

    for(int i = 0; i < n; i ++){
        ll v; cin >> v;
        x.insert(v);
    }

    cout << x.size() << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
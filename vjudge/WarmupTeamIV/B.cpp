#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n, x; 
    cin >> n >> x;

    if (x == n) {
        for (ll i = 0; i < n; i++) {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (ll i = 0; i < x; i++) {
        cout << i << " ";
    }
    for (ll i = x + 1; i < n; i++) {
        cout << i << " ";
    }
    cout << x << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
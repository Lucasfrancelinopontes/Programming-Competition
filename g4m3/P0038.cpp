#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, v;
    cin >> n >> v;

    ll k = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        k += x;
    }

    int ans = ((v - 1 + k) % n + n) % n + 1;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        cout << "Caso " << tc << ": ";
        solve();
    }
}
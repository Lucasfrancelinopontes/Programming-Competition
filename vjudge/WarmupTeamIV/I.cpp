#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int l, r; cin >> l >> r;
    int L, R; cin >> L >> R;

    int ml = max(l, L);
    int mr = min(r, R);

    if (ml > mr) {
        cout << 1 << "\n";
        return;
    }

    int ans = mr - ml;

    if (min(l, L) < ml) {
        ans++;
    }

    if (max(r, R) > mr) {
        ans++;
    }

    cout << ans << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
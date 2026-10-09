#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

void solve() {
    ll r;
    cin >> r;

    ll ans = 0;
    
    ll y_max = r;
    ll y_min = r;
    
    for (ll x = 0; x <= r; x++) {
        
        while (y_max > 0 && hypot(x, y_max) >= r + 1) {
            y_max--;
        }
        
        while (y_min > 0 && hypot(x, y_min) >= r) {
            y_min--;
        }


        ans += (y_max - y_min);
    }

    cout << ans * 4 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
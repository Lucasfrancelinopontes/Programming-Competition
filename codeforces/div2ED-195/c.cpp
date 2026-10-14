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
    int n, k;
    cin >> n >> k;
    
    vll pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        pref[i] = (pref[i - 1] + x) % k;
    }
    
    ll ans = 0;
    vi freq(k, 0); 
    
    for (int r = k + 1; r <= n; r++) {
        freq[pref[r - k - 1]]++;
        ans += freq[pref[r]];
    }
    
    cout << ans << "\n";
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
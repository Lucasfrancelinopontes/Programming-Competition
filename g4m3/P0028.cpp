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

    //stringreversal;
    //parking lot;
    //lucky tree;
    //the sum of the k-th powers
    ll n, q; cin >> n >> q;

    vector<ll> planetas(n);
    vector<vector<int>> pos(10000);
    
    for (ll i = 0; i < n; i++) {
        cin >> planetas[i];
        pos[planetas[i]].pb(i);
    }

    while (q--) {
        ll tt = 0;
        ll a, b; cin >> a >> b;

        // Opcao #1: i < j
        if (pos[b].back() > pos[a][0]) {
            tt = max(tt, (ll)(pos[b].back() - pos[a][0] + 1));
        }

        // Opcao #2: i > j
        auto it_b = lower_bound(all(pos[b]), pos[a][0]);
        if (it_b != pos[b].begin()) {
            --it_b;
            tt = max(tt, n - pos[a][0] + *it_b + 1);
        }

        for (int j : pos[b]) {
            auto it_a = upper_bound(all(pos[a]), j);
            if (it_a != pos[a].end()) {
                tt = max(tt, n - *it_a + j + 1);
            }
        }

        cout << tt << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
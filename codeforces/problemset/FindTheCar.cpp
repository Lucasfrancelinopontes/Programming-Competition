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
    ll n;
    int k, q;
    cin >> n >> k >> q;

    vll a(k + 1, 0);
    vll b(k + 1, 0);

    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> b[i];
    }

    while (q--) {
        ll d;
        cin >> d;

        auto it = upper_bound(all(a), d);
        int i = distance(a.begin(), it) - 1;

        if (a[i] == d) {
            cout << b[i] << " ";
        } else {
            ll dist_trecho = a[i + 1] - a[i];
            ll tempo_trecho = b[i + 1] - b[i];
            
            ll tempo_extra = ((d - a[i]) * tempo_trecho) / dist_trecho;
            
            cout << b[i] + tempo_extra << " ";
        }
    }
    cout << "\n";
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
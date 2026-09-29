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
    ll n; cin >> n;
    vector <ll> qdd(n+1);
    vector <vector<ll>> sm(n);
    
    for(int i = 0; i<n;i++){
        qdd[0] = 0;
        for(int j = 1; j <= n; j++){
            cin >> qdd[j];
            qdd[j] += qdd[j-1];
        }
        sm[i] = qdd;
    }
    ll q; cin >> q;
    while(q--){
        ll l,c; cin >> l >> c;
        ll soma = 0;

        for(int i = 0; i < l; i++){
            soma += sm[i][c];
        }
        cout << soma << "\n";
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
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

void solve() {
    ll n,m; cin >> n >> m;

    vector<pair<int,int>> c;
    ll total = 0;

    while(n--){
        ll q,v; cin >> q >> v;
        c.push_back({v,q});
    }
    sort(c.rbegin(), c.rend());

    for (int i = 0; i < c.size(); i++) {
        if (m == 0) break;

        ll valor = c[i].first;
        ll quantidade = c[i].second;
        ll pegar = min(m, quantidade);

        total += pegar * valor;

        m -= pegar;
    }

    cout << total << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
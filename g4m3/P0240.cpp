#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 7907;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

void dfs(int curr, vector<vi>& adj, vector<bool>& vis, vi& comp, vi& v, int& max_virus) {
    vis[curr] = true;
    comp.pb(curr);
    max_virus = max(max_virus, v[curr]);
    
    for (int nxt : adj[curr]) {
        if (!vis[nxt]) {
            dfs(nxt, adj, vis, comp, v, max_virus);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m; 

    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vi> adj(n);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    vector<bool> vis(n, false);
    vi ans(n, 0);

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            vi comp;
            int max_virus = 0;

            dfs(i, adj, vis, comp, v, max_virus);

            for (int node : comp) {
                ans[node] = max_virus;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    while (T--) {
        solve();
    }

    return 0;
}
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
#define pb(x) push_back(x)
#define F first
#define S second

void dfs(int lula, int v, vector<vi> &cal, vector<unordered_set<ll>> &vis){
    vis[lula].insert(v);
    // vis[v].insert(lula);
    for(auto w: cal[v]) if(find(all(vis[lula]),w) == vis[lula].end()){
        dfs(lula, w, cal, vis);
    }
}

void solve() {  
    ll n,m; cin >> n >> m;

    vector<vi> cal(n);
    vector<unordered_set<ll>> vis(n);

    for(int i = 0; i < m; i++) {
        ll a,b; cin >> a >> b;a--;b--;

        cal[a].pb(b);
        cal[b].pb(a);
    }
    dfs(0, 0, cal, vis);
    for (int i=1; i<n; i++) {
        if(find(all(vis[i]),i-1) == vis[i].end()){
            dfs(i, i, cal, vis);
        }
    }

    ll q; cin >> q;
    for(int i = 0; i < q; i++){
        ll jaca,melon; cin >> jaca >> melon;jaca--;melon--;

        if(find(all(vis[jaca]),melon) == vis[jaca].end()) cout << "nao\n";
        else cout << "sim\n";
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
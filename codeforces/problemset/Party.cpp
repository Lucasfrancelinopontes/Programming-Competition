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


vi adj[2005];
int max_depth = 0;

void dfs(int u, int depth) {
    max_depth = max(max_depth, depth);
    for (int v : adj[u]) {
        dfs(v, depth + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vi roots; 

    for (int i = 1; i <= n; i++) {
        int manager; 
        cin >> manager;
        
        if (manager == -1) {
            roots.pb(i); 
        } else {
            adj[manager].pb(i); 
        }
    }

    for (int r : roots) {
        dfs(r, 1);
    }

    cout << max_depth << "\n";

    return 0;
}

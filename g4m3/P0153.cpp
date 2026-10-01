#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

vector <vector<ll>> adj;
vector<bool> vis;
ll ctd = 0;

void dfs(ll v){
    vis[v] = true;
    ctd++;

    for(ll vertice : adj[v]){
        if(!vis[vertice]){
            dfs(vertice);
        }
    }
}

void solve() {
    ll n; cin >> n;

    adj.resize(n+1);
    vis.resize(n+1,false);

    for(ll i = 0; i < n-1; i++){
        ll a,b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    if(ctd == n ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
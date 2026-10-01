#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

vector <vector<ll>> alunos;
vector <bool> vis;
ll total = 0;

void dfs(ll v){
    vis[v] = true;

    for(ll vertice : alunos[v]){
        if(!vis[vertice]){
            dfs(vertice);
        }
    }
}

void solve() {
    ll n,m; cin >> n >> m;

    alunos.resize(n+1);
    vis.resize(n+1,false);

    for(ll i = 0; i < m; i++){
        ll a,b; cin >> a >> b;

        alunos[a].push_back(b);
        alunos[b].push_back(a);
    }

    for(ll i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            total++;
        }        
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
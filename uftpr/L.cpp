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

void dfs(int v, ll id, vector<vi> &cal, vector<ll> &conexos){
    conexos[v] = id;
    for(auto w: cal[v]) if(conexos[w] == -1){
        dfs(w,id, cal, conexos);
    }
}

void solve() {  
    ll n,m; cin >> n >> m;

    vector<vi> cal(n);
    vector<ll> conexos(n,-1);
    ll id = 0;

    for(int i = 0; i < m; i++){
        ll a,b; cin >> a >> b;a--;b--;

        cal[a].pb(b);
        cal[b].pb(a);
    }
    for(int v = 0; v < n; v++){
        if(conexos[v] == -1){
            dfs(v,id,cal,conexos);
            id++;
        }
    }
    ll q; cin >> q;
    
    for(int i = 0; i < q; i++){
        ll jaca,melon; cin >> jaca >> melon;jaca--;melon--;

        if(conexos[melon] == conexos[jaca]){
            cout << "sim\n";
        }
        else{
            cout << "nao\n";
        }
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
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

struct Jogador {
    string nome;
    int idade;
    int a, b, c, d;
    int id;       
    int max_abc;  
    int soma_cd;  
};

bool comp(const Jogador& j1, const Jogador& j2) {
    if (j1.max_abc != j2.max_abc) return j1.max_abc > j2.max_abc;
    if (j1.soma_cd != j2.soma_cd) return j1.soma_cd > j2.soma_cd;
    if (j1.idade != j2.idade) return j1.idade < j2.idade;
    return j1.id < j2.id;
}

void solve() {
    int n, m; 
    cin >> n >> m;

    vector<Jogador> jogadores(m);

    for (int i = 0; i < m; i++) {
        cin >> jogadores[i].nome >> jogadores[i].idade 
            >> jogadores[i].a >> jogadores[i].b >> jogadores[i].c >> jogadores[i].d;
            
        jogadores[i].id = i; 
        jogadores[i].max_abc = max({jogadores[i].a, jogadores[i].b, jogadores[i].c});
        jogadores[i].soma_cd = jogadores[i].c + jogadores[i].d;
    }

    sort(all(jogadores), comp);

    for (int i = 0; i < n; i++) {
        cout << jogadores[i].nome << "\n";
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
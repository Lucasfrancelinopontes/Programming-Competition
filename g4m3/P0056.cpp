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

// Função recursiva do DFS
void dfs(int u, vector<vi>& adj, vector<bool>& vis) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, adj, vis);
        }
    }
}

void solve() {
    int n;
    // Lê o número de linhas (se falhar, encerra)
    if (!(cin >> n)) return; 
    
    string s;
    getline(cin, s); // Consome a quebra de linha (enter) após ler o valor de N

    // Inicializa a lista de adjacência (usamos n+1 para usar índice 1-based)
    vector<vi> adj(n + 1);

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        
        // Substitui os ':' por espaço para facilitar a extração dos números
        for (char &c : s) {
            if (c == ':') c = ' ';
        }
        
        stringstream ss(s);
        int x;
        ss >> x; // O primeiro número da linha é o nó de destino (X)
        
        int y;
        // Todos os próximos números são os nós de origem (Y)
        while (ss >> y) {
            adj[y].pb(x); // Cria a aresta Y -> X
        }
    }

    // Vetor para rastrear os nós visitados
    vector<bool> vis(n + 1, false);
    
    // Inicia a Busca em Profundidade a partir da linha 1
    dfs(1, adj, vis);

    // Se o DFS conseguiu visitar a linha N, o programa termina
    if (vis[n]) {
        cout << "VERY GOOD PROGRAM!\n";
    } else {
        cout << "TOO BAD...\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; 

    // Beecrowd costuma testar arquivos com apenas um caso de teste
    // ou múltiplos até EOF. Se houver falha de EOF, o solve() aborta seguro.
    while (T--) {
        solve();
    }

    return 0;
}
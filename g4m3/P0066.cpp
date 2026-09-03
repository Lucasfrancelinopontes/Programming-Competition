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
    int n; 
    cin >> n;
    vector<vector<int>> caracol(n, vector<int>(n)); 

    // Lendo a matriz
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> caracol[i][j];
        }
    }

    // Posição inicial no centro
    int r = n / 2;
    int c = n / 2;

    // Vetores de direção: Direita, Cima, Esquerda, Baixo
    int dr[] = {0, -1, 0, 1};
    int dc[] = {1, 0, -1, 0};
    int dir = 0; // Começamos indo para a Direita (índice 0)
    
    vector<int> resp;
    resp.pb(caracol[r][c]); // Guarda o elemento central
    
    // len é a quantidade de passos que daremos na mesma direção
    for (int len = 1; len <= n; len++) {
        // Cada tamanho de passo repete para duas direções, exceto a última esticada
        for (int i = 0; i < 2; i++) {
            
            // O último movimento ao atingir o limite bate na borda em N-1 passos
            if (len == n && i == 1) break; 
            
            int passos = (len == n) ? len - 1 : len;
            
            for (int j = 0; j < passos; j++) {
                r += dr[dir];
                c += dc[dir];
                resp.pb(caracol[r][c]);
            }
            
            // Muda a direção (D -> C -> E -> B -> D...)
            dir = (dir + 1) % 4; 
        }
    }

    // Imprime os valores com um espaço de separação
    for (int i = 0; i < sz(resp); i++) {
        cout << resp[i] << (i == sz(resp) - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Otimização de I/O muito útil em juízes online
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; // Descomente caso algum problema envie o total de testes na 1º linha

    while (T--) {
        solve();
    }

    return 0;
}
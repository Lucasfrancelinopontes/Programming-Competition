
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

// Processa uma linha de 4 posições.
void processLine(vi& v) {
    vi aux;

    // 1. Remove os zeros.
    for (int x : v) {
        if (x != 0) {
            aux.pb(x);
        }
    }

    vi ans;

    // 2. Realiza as fusões.
    for (int i = 0; i < sz(aux); ) {
        if (i + 1 < sz(aux) && aux[i] == aux[i + 1]) {
            ans.pb(aux[i] * 2);
            i += 2;
        } else {
            ans.pb(aux[i]);
            i++;
        }
    }

    // 3. Completa com zeros.
    while (sz(ans) < 4) {
        ans.pb(0);
    }

    v = ans;
}

void solve() {
    vector<vi> mat(4, vi(4));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }

    int dir;
    cin >> dir;

    // Processa as quatro linhas ou colunas.
    for (int line = 0; line < 4; line++) {
        vi v(4);

        // Lê os elementos na direção do movimento.
        for (int pos = 0; pos < 4; pos++) {
            int r, c;

            if (dir == 0) {          // Esquerda
                r = line;
                c = pos;
            } 
            else if (dir == 1) {     // Cima
                r = pos;
                c = line;
            } 
            else if (dir == 2) {     // Direita
                r = line;
                c = 3 - pos;
            } 
            else {                   // Baixo
                r = 3 - pos;
                c = line;
            }

            v[pos] = mat[r][c];
        }

        // Processa a linha.
        processLine(v);

        // Escreve os elementos de volta.
        for (int pos = 0; pos < 4; pos++) {
            int r, c;

            if (dir == 0) {
                r = line;
                c = pos;
            } 
            else if (dir == 1) {
                r = pos;
                c = line;
            } 
            else if (dir == 2) {
                r = line;
                c = 3 - pos;
            } 
            else {
                r = 3 - pos;
                c = line;
            }

            mat[r][c] = v[pos];
        }
    }

    // Imprime a matriz resultante.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j) cout << " ";
            cout << mat[i][j];
        }
        cout << '\n';
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


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

    // Armazena somente os quadrados pretos.
    set<pii> black;

    // Posição inicial.
    int x = 0, y = 0;

    // 0 = cima, 1 = direita,
    // 2 = baixo, 3 = esquerda.
    int dir = 0;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    // Executa exatamente n passos.
    for (int i = 0; i < n; i++) {

        pii pos = {x, y};

        // Verifica a cor do quadrado atual.
        auto it = black.find(pos);

        if (it == black.end()) {
            // Quadrado branco:
            // gira no sentido horário.
            dir = (dir + 1) % 4;

            // Pinta de preto.
            black.insert(pos);
        }
        else {
            // Quadrado preto:
            // gira no sentido anti-horário.
            dir = (dir + 3) % 4;

            // Pinta de branco.
            black.erase(it);
        }

        // Avança na direção atualizada.
        x += dx[dir];
        y += dy[dir];
    }

    // A estrutura set já mantém a ordem:
    // primeiro por x, depois por y.
    cout << sz(black) << '\n';

    for (auto [px, py] : black) {
        cout << px << " " << py << '\n';
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

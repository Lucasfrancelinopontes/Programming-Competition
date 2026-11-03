
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

    // Coordenada -> instante da ultima pintura de preto.
    map<pii, int> black;

    // Posicao inicial.
    int x = 0, y = 0;

    // 0 = cima, 1 = direita,
    // 2 = baixo, 3 = esquerda.
    int dir = 0;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    // Simulacao da formiga.
    for (int step = 1; step <= n; step++) {

        pii pos = {x, y};

        auto it = black.find(pos);

        if (it == black.end()) {
            // Quadrado branco:
            // gira 90 graus no sentido horario.
            dir = (dir + 1) % 4;

            // Pinta de preto e registra o instante.
            black[pos] = step;
        }
        else {
            // Quadrado preto:
            // gira 90 graus no sentido anti-horario.
            dir = (dir + 3) % 4;

            // Pinta de branco e remove o registro.
            black.erase(it);
        }

        // Avanca na direcao atualizada.
        x += dx[dir];
        y += dy[dir];
    }

    // Guarda (instante, x, y).
    vector<tuple<int, int, int>> ans;

    for (auto [pos, step] : black) {
        auto [px, py] = pos;
        ans.pb({step, px, py});
    }

    // Ordena pelo instante da ultima pintura.
    sort(all(ans));

    // Quantidade de quadrados pretos.
    cout << sz(ans) << '\n';

    // Imprime do mais antigo para o mais recente.
    for (auto [step, px, py] : ans) {
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


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

// Distancia ao quadrado da origem.
ll dist2(pii p) {
    return 1LL * p.F * p.F + 1LL * p.S * p.S;
}

// Divide o plano em duas metades angulares.
int half(pii p) {
    if (p.S > 0 || (p.S == 0 && p.F >= 0) )
        return 0;

    return 1;
}

// Ordena por distancia e depois por angulo.
bool cmp(pii a, pii b) {
    ll da = dist2(a);
    ll db = dist2(b);

    // Primeiro criterio: distancia.
    if (da != db) {
        return da < db;
    }

    // Segundo criterio: metade angular.
    int ha = half(a);
    int hb = half(b);

    if (ha != hb) {
        return ha < hb;
    }

    // Terceiro criterio: produto vetorial.
    ll cross = 1LL * a.F * b.S
             - 1LL * a.S * b.F;

    return cross > 0;
}

void solve() {
    int n;
    cin >> n;

    // Armazena os quadrados pretos.
    set<pii> black;

    // Posicao inicial da formiga.
    int x = 0, y = 0;

    // 0 = cima, 1 = direita,
    // 2 = baixo, 3 = esquerda.
    int dir = 0;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    // Simulacao da formiga.
    for (int i = 0; i < n; i++) {
        pii pos = {x, y};

        auto it = black.find(pos);

        if (it == black.end()) {
            // Branco: giro horario e pinta de preto.
            dir = (dir + 1) % 4;
            black.insert(pos);
        }
        else {
            // Preto: giro anti-horario e pinta de branco.
            dir = (dir + 3) % 4;
            black.erase(it);
        }

        // Avanca na direcao atualizada.
        x += dx[dir];
        y += dy[dir];
    }

    // Transforma o set em vetor.
    vector<pii> ans(all(black));

    // Ordena por distancia e angulo.
    sort(all(ans), cmp);

    // Imprime a quantidade de quadrados pretos.
    cout << sz(ans) << '\n';

    // Imprime as coordenadas na ordem solicitada.
    for (auto [px, py] : ans) {
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


    
  
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
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

/*
 * Calcula (a^b) mod mod usando exponenciacao binaria.
 *
 * Requisitos:
 *   - b >= 0;
 *   - mod > 0.
 *
 * O tipo __int128 e utilizado nas multiplicacoes intermediarias para
 * evitar overflow de long long quando mod e grande.
 */
ll modPow(ll a, ll b, ll mod) {
    if (b < 0) {
        throw invalid_argument("O expoente deve ser nao negativo.");
    }
    if (mod <= 0) {
        throw invalid_argument("O modulo deve ser positivo.");
    }

    a %= mod;
    if (a < 0) a += mod;

    ll result = 1 % mod;

    while (b > 0) {
        // Se o bit menos significativo de b for 1, incorpora a na resposta.
        if (b & 1LL) {
            result = (ll)((__int128)result * a % mod);
        }

        // Eleva a ao quadrado e desloca o expoente uma posicao a direita.
        a = (ll)((__int128)a * a % mod);
        b >>= 1;
    }

    return result;
}

void solve() {
    ll a, b, mod;
    cin >> a >> b >> mod;

    try {
        cout << modPow(a, b, mod) << '\n';
    } catch (const invalid_argument& e) {
        cerr << "Erro: " << e.what() << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}


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

vector<long long> estourados;

void gerar_estourados(long long numero_atual, int ultimo_digito) {
    // O limite do problema é N = 10^8
    if (numero_atual > 100000000LL) {
        return;
    }

    if (numero_atual > 0) {
        estourados.push_back(numero_atual);
    }

    int inicio = (numero_atual == 0) ? 1 : ultimo_digito;
    
    for (int d = inicio; d <= 9; ++d) {
        gerar_estourados(numero_atual * 10 + d, d);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    gerar_estourados(0, 1);
    sort(estourados.begin(), estourados.end());
    
    int T;
    if (cin >> T) {
        while (T--) {
            long long N;
            cin >> N;
            
            int resposta = upper_bound(estourados.begin(), estourados.end(), N) - estourados.begin();
            
            cout << resposta << "\n";
        }
    }
    
    return 0;
}
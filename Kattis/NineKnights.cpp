
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
    vector<string> mat(5);

    int knights = 0;

    for (int i = 0; i < 5; i++) {
        cin >> mat[i];

        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == 'k') {
                knights++;
            }
        }
    }

    // Exatamente nove cavalos são necessários.
    if (knights != 9) {
        cout << "invalid\n";
        return;
    }

    // Os oito movimentos possíveis do cavalo.
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

    // Verifica cada posição do tabuleiro.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (mat[i][j] != 'k') continue;

            // Testa os oito movimentos.
            for (int d = 0; d < 8; d++) {
                int nx = i + dx[d];
                int ny = j + dy[d];

                // Verifica os limites do tabuleiro.
                if (nx < 0 || nx >= 5 ||
                    ny < 0 || ny >= 5) {
                    continue;
                }

                // Outro cavalo pode ser atacado.
                if (mat[nx][ny] == 'k') {
                    cout << "invalid\n";
                    return;
                }
            }
        }
    }

    cout << "valid\n";
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

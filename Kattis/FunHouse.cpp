
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

void solve(int w, int h, int tc) {
    vector<string> mat(h);

    int x = -1, y = -1;

    // Lê a casa e localiza a entrada.
    for (int i = 0; i < h; i++) {
        cin >> mat[i];

        for (int j = 0; j < w; j++) {
            if (mat[i][j] == '*') {
                x = i;
                y = j;
            }
        }
    }

    // Determina a direção inicial.
    int dx = 0, dy = 0;

    if (x == 0) {
        dx = 1;
    }
    else if (x == h - 1) {
        dx = -1;
    }
    else if (y == 0) {
        dy = 1;
    }
    else if (y == w - 1) {
        dy = -1;
    }

    // Simula o caminho da luz.
    while (true) {
        x += dx;
        y += dy;

        char c = mat[x][y];

        // Espelho /
        if (c == '/') {
            int ndx = -dy;
            int ndy = -dx;

            dx = ndx;
            dy = ndy;
        }

        // Espelho invertido (barra para a direita).
        else if (c == '\\') {
            swap(dx, dy);
        }

        // Encontrou a saída.
        else if (c == 'x') {
            mat[x][y] = '&';
            break;
        }
    }

    cout << "HOUSE " << tc << '\n';

    for (const string& row : mat) {
        cout << row << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h;
    int tc = 1;

    while (cin >> w >> h) {
        if (w == 0 && h == 0) break;

        solve(w, h, tc++);
    }

    return 0;
}

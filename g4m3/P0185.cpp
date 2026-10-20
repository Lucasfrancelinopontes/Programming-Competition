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
    int xa, ya;
    string s;
    cin >> xa >> ya >> s;

    int nc = count(all(s), 'C');
    int nd = count(all(s), 'D');
    int ne = count(all(s), 'E');

    if ((nc == 0 && ya != 0) ||
        (nc > 0 && (ya < 1 || ya > nc))) {
        cout << "NO\n";
        return;
    }

    bool ok = false;

    int firstE = (ne == 0 ? 0 : 1);

    for (int e = firstE; e <= ne; e++) {
        int d = xa + e;

        bool validD;

        if (nd == 0)
            validD = (d == 0);
        else
            validD = (d >= 1 && d <= nd);

        if (!validD)
            continue;

        int total = ya + d + e;
        int maior = max({ya, d, e});

        if (maior <= total - maior + 1) {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
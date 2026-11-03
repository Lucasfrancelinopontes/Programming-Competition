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

int animalGroup(ll x) {
    int lastTwo = x % 100;
    // Grupo 1: 01-04, ..., grupo 25: 97-00.
    return ((lastTwo + 99) % 100) / 4;
}

void solve() {
    double V;
    ll N, M;

    while (cin >> V >> N >> M) {
        if (V == 0.0 && N == 0 && M == 0) break;

        ll prize = 0;

        if (N % 10000 == M % 10000) {
            prize = 3000;
        } else if (N % 1000 == M % 1000) {
            prize = 500;
        } else if (N % 100 == M % 100) {
            prize = 50;
        } else if (animalGroup(N) == animalGroup(M)) {
            prize = 16;
        }

        cout << fixed << setprecision(2) << V * prize << '\n';
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

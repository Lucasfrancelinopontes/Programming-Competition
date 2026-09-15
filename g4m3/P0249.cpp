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
    string s; cin >> s;

    size_t pos = s.find('.');
    ll numerador = 0;
    ll denominador = 1;

    if (pos == string::npos) {
        numerador = stoll(s);
        denominador = 1;
    } else {
        int casas_decimais = sz(s) - pos - 1;
        s.erase(pos, 1);
        numerador = stoll(s);
        
        for (int i = 0; i < casas_decimais; ++i) {
            denominador *= 10;
        }
    }

    ll divisor = std::gcd(numerador, denominador);
    numerador /= divisor;
    denominador /= divisor;

    if (denominador == 1) {
        cout << numerador << "\n";
    } else {
        cout << numerador << "/" << denominador << "\n";
    }
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
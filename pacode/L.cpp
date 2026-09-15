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
    int n; cin >> n;
    string osklen; cin >> osklen;
    vi numbers(n);
    int acumulado_geral = 0;
    int max_diference = -1;
    int dormir_no_pop = 0;

    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    bool find_left = false;
    for (int i=0; i<n; i++) {
        
        if (osklen[i] == '1' && !find_left) {
            find_left = true;
            continue;
        }

        if (osklen[i] == '1' && find_left) {
            acumulado_geral += dormir_no_pop - max_diference;
            dormir_no_pop = 0;
            max_diference = -1;
            continue;
        }

        if (find_left) {
            max_diference = max(max_diference, number[i] - number[i-1]);
        }
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
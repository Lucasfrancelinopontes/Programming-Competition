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
    int n, k;
    cin >> n >> k;

    map<int,int> freq;

    vi escudos(n);
    for (int i=0; i<n; i++) cin >> escudos[i];

    int escudos_destruidos = 0;
    int left = 0;
    for (int right=0; right<n; right++) {
        if (escudos_destruidos <= 3) {
            freq[escudos[right]]++;
            if (freq[escudos[right]] != 1) {
                escudos_destruidos++;
            }

            while (escudos_destruidos == 4 && freq[escudos[left]] > 0) {
                if (freq[escudos[left]] == 1) {
                    freq[escudos[left]]--;
                    escudos_destruidos--;
                } else freq[escudos[left]]--;
            }
        }
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
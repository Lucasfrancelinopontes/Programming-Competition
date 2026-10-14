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
    int n;
    while (cin >> n && n != 0) {
        vector<string> names(n);
        for (int i = 0; i < n; i++) {
            cin >> names[i];
        }

        vi deck(52);
        for (int i = 0; i < 52; i++) {
            cin >> deck[i];
        }

        vector<bool> active(n, true);
        int deck_idx = 0;

        while (true) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (active[i]) cnt++;
            }

            if (cnt <= 1) break;
            if (52 - deck_idx < cnt) break;

            vi drawn(n, 0);
            int min_val = 15;

            for (int i = 0; i < n; i++) {
                if (active[i]) {
                    drawn[i] = deck[deck_idx++];
                    min_val = min(min_val, drawn[i]);
                }
            }

            vector<bool> next_active = active;
            int next_cnt = cnt;

            for (int i = 0; i < n; i++) {
                if (active[i] && drawn[i] == min_val) {
                    next_active[i] = false;
                    next_cnt--;
                }
            }

            if (next_cnt == 0) break;
            active = next_active;
        }

        for (int i = 0; i < n; i++) {
            if (active[i]) {
                cout << names[i] << " ";
            }
        }
        cout << "\n";
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
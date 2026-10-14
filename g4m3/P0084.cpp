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
    int L, C;
    if (!(cin >> L >> C)) return;
    
    vector<string> grid(L);
    for (int i = 0; i < L; i++) {
        cin >> grid[i];
    }
    
    vector<vi> dist(L, vi(C, INF));
    
    auto dfs = [&](auto& self, int r, int c, int d) -> void {

        if (r < 0 || r >= L || c < 0 || c >= C) return;
        
        if (d >= dist[r][c]) return;
        
        dist[r][c] = d;

        self(self, r + 1, c, d + 1);
        self(self, r - 1, c, d + 1);
        self(self, r, c + 1, d + 1);
        self(self, r, c - 1, d + 1);
    };
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'X') {
                dfs(dfs, i, j, 0);
            }
        }
    }
    
    int max_dist = -1;
    int count = 0;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == '.') {
                if (dist[i][j] > max_dist) {
                    max_dist = dist[i][j];
                    count = 1;
                } else if (dist[i][j] == max_dist) {
                    count++;
                }
            }
        }
    }
    
    cout << max_dist << " " << count << "\n";
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
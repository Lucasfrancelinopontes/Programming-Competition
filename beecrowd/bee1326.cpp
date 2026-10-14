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
    int r;
    while (cin >> r && r != 0) {
        map<string, int> cost;
        string last_product = "";
        for (int i = 0; i < r; i++) {
            string s1, plus, s2, arrow, s3;
            cin >> s1 >> plus >> s2 >> arrow >> s3;
            int c1 = cost[s1];
            int c2 = cost[s2];
            if (c1 == c2) {
                cost[s3] = c1 + 1;
            } else {
                cost[s3] = max(c1, c2);
            }
            last_product = s3;
        }
        cout << last_product << " requires " << cost[last_product] << " containers\n";
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
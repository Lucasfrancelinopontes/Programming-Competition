#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

int n, m;
int xi, yi, xf, yf;
int k;

vector<pii> v;
vector<bool> dp(pow(2, 21));

bool solve(int s, int a, int b) {
    if (dp[s]) return false;
    
    if ((a == xf) && b == yf) return true;

    if (a < 0 || a > n || b < 0 || b > m) {
        dp[s] = true;
        return false;
    }

    bool r = false;
    for (int i = 0; i < k; i++) {
        if (s & (1 << i)) continue;
        r = r | solve(s | (1 << i), a + v[i].first, b + v[i].second);
        if (r) break;
    }

    if (!r) dp[s] = true;

    return r;
}

int main() {
    
    cin >> n >> m;
    cin >> xi >> yi >> xf >> yf;
    cin >> k;

    v.resize(k);
    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        v[i] = {a, b};
    }

    bool res = solve(0, xi, yi);

    if (res) cout << "YES";
    else cout << "NO";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int runs = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) runs++;
    }

    int best = 0;

    for (int i = 1; i < n - 1; i++) {
        int b1 = (s[i - 1] != s[i]);
        int b2 = (s[i] != s[i + 1]);
        int b3 = (s[i - 1] != s[i + 1]);

        best = max(best, b1 + b2 - b3);
    }

    cout << runs - best << '\n';
}

int main() {
    fastio;

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
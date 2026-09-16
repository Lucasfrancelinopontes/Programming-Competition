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
    cin >> n;

    ll total = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }

    ll diff = LINF;
    ll totalA = 0;

    for (int i = 0; i < n; i++) {
        totalA += v[i];

        ll totalB = total - totalA;
        diff = min(diff, abs(totalA - totalB));
    }

    cout << diff << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
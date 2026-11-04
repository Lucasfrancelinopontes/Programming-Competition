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
    int N, A, B;
    cin >> N >> A >> B;

    ll answer = 0;
    for (int i = 1; i <= N; ++i) {
        int value = i;
        int digitSum = 0;

        while (value > 0) {
            digitSum += value % 10;
            value /= 10;
        }

        if (A <= digitSum && digitSum <= B) {
            answer += i;
        }
    }

    cout << answer << '\n';
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
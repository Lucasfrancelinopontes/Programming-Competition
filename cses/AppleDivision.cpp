#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
vector<ll> a;

ll solve(int i, ll diff) {
    if (i == n)
        return abs(diff);
    return min(
        solve(i + 1, diff + a[i]),
        solve(i + 1, diff - a[i])
    );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n);

    for (auto &x : a)
        cin >> x;

    cout << solve(0, 0) << '\n';
}
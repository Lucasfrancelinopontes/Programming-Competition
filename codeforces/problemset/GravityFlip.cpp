#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastIO

    int n;
    cin >> n;

    vector<ll> c(n);

    for (int i = 0; i < n; i++)
        cin >> c[i];

    sort(c.begin(), c.end());

    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << c[i];
    }
    cout << '\n';

    return 0;
}
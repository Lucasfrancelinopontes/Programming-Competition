#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    int m = min(a,min(b,min(c,min(d,e))));

    int abu = (a-m) + ( b -m ) + (c-m) + (d-m) + (e-m);

    cout << abu << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
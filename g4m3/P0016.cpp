#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll ctd = 0;
    ll n; cin >> n;

    while(n != 1){
        n = n/2;
        ctd ++;
    }
    cout << ctd+1 << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
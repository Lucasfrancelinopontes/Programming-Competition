#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;
    ll b, s = 0;
    ll v;

    cin >> v;
    b = v;
    for(int i = 0; i < n-1; i++){
        s = max(v,v+s);

        b = max(b,s);

        cin >> v;
    }

    cout << b << "\n";

}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
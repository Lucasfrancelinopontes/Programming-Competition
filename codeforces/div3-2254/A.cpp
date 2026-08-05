#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll a,b,c; cin >> a >> b >> c;

    if( a == b || a == c || c == b){
        cout << "0\n";
    }
    else{
        cout << min(min(abs(a - b),abs(a - c)),abs(b-c)) << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
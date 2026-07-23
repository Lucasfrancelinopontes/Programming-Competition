#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n1 = 0, n2 = 0, n3 = 0; cin >> n1 >> n2 >> n3;

    if(n1 *n3 <= n2){
        cout << "NAO\n"; 
    }
    else{
        cout << "SIM\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; 
    while(cin >> n && n != 0){
        for(ll i = 1; i*i <= n; ++i){
            if(i > 1){
                cout << " ";
            }
            cout << i*i;
        }
        cout << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}

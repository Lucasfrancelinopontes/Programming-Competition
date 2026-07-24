#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll valor; cin >> valor;

    while(valor != 1){
        cout << valor << "\n";
        if(valor % 2 == 0){
            valor = valor /2;
        }
        else{
            valor = 3*valor +1;
        }
    }
    cout << "1\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int v, s; cin >> v >> s;
    ll soma = 0;

    for(int i = 0; i < v; i++){
        int vl; cin >> vl;

        soma += vl;
    }

    if( soma >= s){
        cout << "NADA PREOCUPANTE\n";
    }
    else if( soma >= s-5){
        cout << "POUCO PREOCUPANTE\n";
    }
    else{
        cout << "MUITO PREOCUPANTE\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
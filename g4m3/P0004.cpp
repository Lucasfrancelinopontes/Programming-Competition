#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int s; cin >> s;
    bool ua = false;
    ll total = 0;

    for(int i = 0; i < s; i++){
        int valor; cin >> valor;

        if(valor == 1){
            ua = true;
        }
        if(valor == 0 && ua){
            total ++;
            ua = false;
        }
    }
    if(total != 0){
        if(ua){total++;}
        cout << total << "\n";
    }
    else{
        cout << "1\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
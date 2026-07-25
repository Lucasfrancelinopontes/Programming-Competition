#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int v;
    int va;
    int ctd = 0;
    int maior = 0;

    while(cin >> v){
        va =v;
        while(va != 1){
            ctd ++;
            if(va % 2 == 0){
                va = va /2;
            }
            else{
                va =va +1;
            }
        }
        if(ctd > maior){
            maior = ctd;
        }
        ctd = 0;
    }
    cout << maior << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}

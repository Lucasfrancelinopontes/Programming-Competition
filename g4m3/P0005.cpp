#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int p; cin >> p;
    int melao = 0; int goblins = 0;
    while(true){
        int f,m,g; cin >> f >> m >> g;

        if(f == 0){
            break;
        }

        if(f > p){
            melao += m; goblins += g;
        }
        cout << "Meloes roubados: " << melao << "\n";
        cout << "Goblins resgatados: " << goblins << "\n";
        cout << "---\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
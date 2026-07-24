#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int m; cin >> m;
    int mais = 0; int menos = 0; int o = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            int v;
            cin >> v;

            if(v <= 90){
                cout << "+";
                mais ++;
            }
            else if(v <= 100){
                cout << "o";
                o ++;
            }
            else{
                cout << "-";
                menos ++;
            }
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "+: " << mais << "\n";
    cout << "o: " << o << "\n";
    cout << "-: " << menos << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
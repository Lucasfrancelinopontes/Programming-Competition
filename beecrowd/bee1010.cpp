#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    int cdg1,cdg2 = 0;
    int np1,np2 = 0;
    double vu1,vu2 = 0.0;

    cin >> cdg1 >> np1 >> vu1;
    cin >> cdg2 >> np2 >> vu2;

    double total = (np1 * vu1) + (np2 * vu2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t; // Descomente se houver múltiplos casos de teste
    while(t--) {
        solve();
    }
    return 0;
}
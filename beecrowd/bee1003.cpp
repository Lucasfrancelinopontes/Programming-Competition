#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    int a,b = 0;

    cin >> a;
    cin >> b;

    cout << "SOMA = " << a + b << endl;
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
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    string nome;
    float salario = 0.0;
    double vendas = 0.0;

    cin >> nome;
    cin >> salario;
    cin >> vendas;

    double total = salario + (vendas*0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
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
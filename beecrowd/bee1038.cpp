#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    map<string,float> lanche;
    lanche["1"] = 4.00;
    lanche["2"] = 4.50;
    lanche["3"] = 5.00;
    lanche["4"] = 2.00;
    lanche["5"] = 1.50;

    string id = "";
    float qtd = 0;

    cin >> id >> qtd;

    cout << "Total: R$ " << fixed << setprecision(2) << lanche[id] * qtd << endl;

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
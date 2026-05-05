#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

double solve(double total) {
    double lanches[] = {1.50,2.50,3.50,4.50,5.50};

    int id = 0;
    double qtd = 0;
    double preco = 0;
    cin >> id >> qtd;
    switch (id)
    {
    case 1001: preco = 1.50;
        break;
    case 1002: preco = 2.50;
        break;
    case 1003: preco = 3.50;
        break;
    case 1004: preco = 4.50;
        break;
    case 1005: preco = 5.50;
        break;
    default: preco = 0;
        break;
    }

    return preco * qtd;
}

int main() {
    fastio;
    int t = 1;
    double total = 0;
    cin >> t; // Descomente se houver múltiplos casos de teste
    while(t--) {
        total += solve(total);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
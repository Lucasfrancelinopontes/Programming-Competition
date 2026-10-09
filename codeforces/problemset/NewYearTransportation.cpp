#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

bool dfs(int atual, int destino, const vector<int>& a) {
    if (atual == destino) {
        return true;
    }
    if (atual > destino) {
        return false;
    }
    int proxima_celula = atual + a[atual];
    
    return dfs(proxima_celula, destino, a);
}

void solve() {
    int n, t; cin >> n >> t;

    vector<int> a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }
    if (dfs(1, t, a)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}


// int main() {
//     // Otimização de I/O em C++ para maratonas
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, t;
//     if (!(cin >> n >> t)) return 0;

//     // Usaremos um vetor de tamanho n+1 para usar indexação baseada em 1
//     vector<int> a(n);
//     for (int i = 1; i < n; ++i) {
//         cin >> a[i];
//     }

//     // Começamos a DFS na célula 1 buscando a célula t
//     if (dfs(1, t, a)) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }

//     return 0;
// }
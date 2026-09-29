#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d; 
    cin >> n >> d;
    string s; 
    cin >> s;

    vector<int> b_pos; // Guarda todos os índices onde existe a letra 'B'
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            b_pos.push_back(i);
        }
    }

    // 1. Cuidado dos bruxos: e se não tiver nenhuma loja?
    if (b_pos.empty()) {
        cout << "NO\n";
        return;
    }

    // 2. A distância da posição 0 até a primeira loja é maior que D?
    if (b_pos.front() > d) {
        cout << "NO\n";
        return;
    }

    // 3. A distância do final da rua até a última loja é maior que D?
    if ((n - 1) - b_pos.back() > d) {
        cout << "NO\n";
        return;
    }

    // 4. A distância entre lojas consecutivas deixa alguma casa desamparada?
    for (int i = 1; i < (int)b_pos.size(); i++) {
        // Se a diferença entre as lojas é maior que 2D + 1, o meio fica longe demais
        if (b_pos[i] - b_pos[i - 1] > 2 * d + 1) {
            cout << "NO\n";
            return;
        }
    }

    // Se sobreviveu a todos os testes acima, as lojas cobrem a rua inteira
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; Se houver múltiplos casos de teste, descomente.
    
    while (T--) {
        solve();
    }

    return 0;
}
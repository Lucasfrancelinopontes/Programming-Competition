#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string osklen; 
    cin >> osklen;
    
    // Lê as posições (usando long long para evitar overflow no futuro se necessário)
    vector<long long> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Acha a posição do primeiro e do último '1'
    int first_1 = -1, last_1 = -1;
    for (int i = 0; i < n; i++) {
        if (osklen[i] == '1') {
            if (first_1 == -1) first_1 = i; // Grava apenas a 1ª vez
            last_1 = i; // Vai atualizando até terminar no último
        }
    }

    long long ans = 0; // Usando long long para evitar overflow!

    // 1. Custo para silenciar os '0's à esquerda do primeiro '1'
    ans += numbers[first_1] - numbers[0];

    // 2. Custo para silenciar os '0's à direita do último '1'
    if (last_1 < n - 1) {
        ans += numbers[n - 1] - numbers[last_1];
    }

    // 3. Blocos limitados por '1's (meio)
    int prev_1 = first_1;
    for (int i = first_1 + 1; i <= last_1; i++) {
        if (osklen[i] == '1') {
            long long max_gap = 0;
            
            // Procura o maior espaço entre vizinhos dentro deste bloco
            for (int j = prev_1; j < i; j++) {
                max_gap = max(max_gap, numbers[j+1] - numbers[j]);
            }
            
            // Custo é a distância total entre os dois '1's menos o maior buraco
            ans += (numbers[i] - numbers[prev_1]) - max_gap;
            prev_1 = i;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; // Descomente caso tenha casos de teste múltiplos
    while (T--) {
        solve();
    }

    return 0;
}
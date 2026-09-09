#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    string fazendas; 
    cin >> fazendas;

    int ctd = 0;

    // Pula de k em k para analisar cada fazenda (bloco) individualmente
    for (int i = 0; i < n; i += k) {
        bool so_tem_nhoj = true;
        
        // Verifica os k campos dentro desta fazenda
        for (int j = 0; j < k; j++) {
            if (fazendas[i + j] == '0') {
                so_tem_nhoj = false; // Achou uma terra do John, não paga taxa
                break;
            }
        }
        
        // Se a fazenda inteira for do Nhoj, ele é obrigado a pagar
        if (so_tem_nhoj) {
            ctd++;
        }
    }
    
    cout << ctd << "\n";
}

int main() {
    // Otimização de I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
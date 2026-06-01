#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        vector<int> contagem(101, 0);
        
        for (int i = 0; i < n; i++) {
            int inicio, fim;
            cin >> inicio >> fim;
            for (int j = inicio; j <= fim; j++) {
                contagem[j]++;
            }
        }

        int num_procurado;
        cin >> num_procurado;

        if (contagem[num_procurado] == 0) {
            cout << num_procurado << " not found\n";
        } else {
            
            int posicao_inicial = 0;
            for (int i = 1; i < num_procurado; i++) {
                posicao_inicial += contagem[i];
            }
            
            int posicao_final = posicao_inicial + contagem[num_procurado] - 1;
            
            cout << num_procurado << " found from " << posicao_inicial << " to " << posicao_final << "\n";
        }
    }

    return 0;
}

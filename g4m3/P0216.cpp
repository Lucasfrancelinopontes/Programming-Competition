#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Otimização de leitura e escrita
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    long long soma_atual = 0;
    int esq = 0;

    for (int dir = 0; dir < n; dir++) {
        soma_atual += p[dir]; // Expande a janela

        // Se passar do alvo, encolhe a janela pela esquerda
        while (soma_atual > x && esq <= dir) {
            soma_atual -= p[esq];
            esq++;
        }

        // Verifica se achou a soma exata
        if (soma_atual == x) {
            cout << "YES\n";
            return 0; // Encerra o programa
        }
    }

    cout << "NO\n";
    return 0;
}
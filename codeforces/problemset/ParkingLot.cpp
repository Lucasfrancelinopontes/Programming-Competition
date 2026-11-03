#include <bits/stdc++.h>

using namespace std;

// Função utilitária para calcular potência inteira (a^b)
long long power(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    // Caso 1: Bloco em uma das extremidades
    long long extremidades = 24 * power(4, n - 3);

    // Caso 2: Bloco no meio (só existe se n > 3)
    long long meio = 0;
    if (n > 3) {
        meio = 36 * (n - 3) * power(4, n - 4);
    }

    long long total = extremidades + meio;

    cout << total << "\n";

    return 0;
}
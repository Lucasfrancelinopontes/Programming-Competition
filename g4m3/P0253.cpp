#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long menor_dor = -1;

    while (n--) {
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];

        // Ordena os números para que v[0] e v[1] sejam os catetos e v[2] seja a hipotenusa
        sort(v.begin(), v.end());

        // Verifica se é uma tripla pitagórica: a² + b² == c²
        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) {
            long long dor_atual = v[0] + v[1] + v[2];
            
            if (menor_dor == -1 || dor_atual < menor_dor) {
                menor_dor = dor_atual;
            }
        }
    }

    cout << menor_dor << "\n";

    return 0;
}
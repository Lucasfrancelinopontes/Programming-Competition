#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n;
    cin >> n;

    bool encontrou = false;

    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            for (int c = b; c <= n; c++) {

                if (a * a + b * b == c * c) {
                    cout << a << " " << b << " " << c << "\n";
                    encontrou = true;
                }
            }
        }
    }

    if (!encontrou) {
        cout << "nenhuma tripla\n";
    }
}

int main() {
    fastio;
    int t = 1;
    while(t--) solve();
    return 0;
}
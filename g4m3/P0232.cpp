#include <iostream>
#include <string>

using namespace std;

int main() {
    // Otimização de entrada e saída
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        while (n--) {
            string s;
            cin >> s;
            
            int mask = 0;
            
            for (char c : s) {
                mask ^= (1 << (c - 'a'));
            }
            
            if (__builtin_popcount(mask) <= 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
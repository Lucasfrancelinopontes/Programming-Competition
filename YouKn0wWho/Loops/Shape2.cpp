#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            int spaces = n - i;
            int stars = 2 * i - 1;
            
            // Print leading spaces
            for (int j = 0; j < spaces; ++j) {
                cout << ' ';
            }
            
            // Print stars
            for (int j = 0; j < stars; ++j) {
                cout << '*';
            }
            
            // Print newline without any trailing spaces
            cout << '\n';
        }
    }
    
    return 0;
}
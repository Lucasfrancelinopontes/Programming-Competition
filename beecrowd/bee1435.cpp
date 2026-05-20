#include <iostream>
#include <iomanip>   
#include <algorithm> 

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    while (cin >> n && n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                
                int valor = min({i, j, n - 1 - i, n - 1 - j}) + 1;
                
                if (j == 0) {
                    cout << setw(3) << valor;
                } else {
                    cout << " " << setw(3) << valor;
                }
            }
            
            cout << "\n";
        }
        
        cout << "\n";
    }
    
    return 0;
}
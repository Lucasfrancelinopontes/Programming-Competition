#include <bits/stdc++.h>

using namespace std;

void resolve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> qtd(n + 1, 0); 
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        qtd[a[i]]++; 
    }
    
    vector<bool> marcado(n + 1, false);
    int resposta = 0;
    
    for (int i = 0; i < n; i++) {
        int soma = a[i];
        for (int j = i + 1; j < n; j++) {
            soma += a[j];
            
            if (soma > n) break; 
            
            if (!marcado[soma]) {
                resposta += qtd[soma]; 
                marcado[soma] = true;  
            }
        }
    }
    
    cout << resposta << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        resolve();
    }
    
    return 0;
}
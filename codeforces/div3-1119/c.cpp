#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    
    // 1. Lê a entrada como um vetor de inteiros, ignorando espaços automaticamente
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<char> abu(n);
    bool left1 = false;
    bool rigth1 = false;

    // 2. Usando (n + 1) / 2 cobre tanto vetores pares quanto ímpares corretamente
    for(int i = 0; i < (n + 1) / 2; i++){
        int pe = i;
        int pd = n - 1 - i;

        // Comparamos com o número 0 (inteiro), não com o char '0'
        if(!left1){
            if(a[pe] != 0){
                left1 = true;
                abu[pe] = '1';
            }
            else{
                abu[pe]= '0';
            }
        }
        else{
            if(a[pe] != 0){
                abu[pe] = '1';
            }
            else{
                abu[pe]= '0';
            }
        }
        
        if(!rigth1){
            if(a[pd] != 0){
                rigth1 = true;
                abu[pd] = '1';
            }
            else{
                abu[pd]= '0';
            }
        }
        else{
            if(a[pd] != 0){
                abu[pd] = '1';
            }
            else{
                abu[pd]= '0';
            }
        }
    }
    
    for(auto i : abu){
        cout << i << " ";
    }
    cout << "\n"; // 3. Importante: pular linha ao fim de cada caso de teste
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>


using namespace std;

int main(){
    long long n =0,p = 0,menor = numeric_limits<long long>::max(), valor = 0;

    cin >> n;

    for(long long i = 0; i < n; i++){
        cin >> valor;
        
        if(valor < menor){
            menor = valor;
            p = i;
        }

    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << p << endl;

    return 0;
}
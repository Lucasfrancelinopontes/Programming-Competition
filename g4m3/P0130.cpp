#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;
    long long maiorlucro = 0;
    long long menorcompra = pow(10,8);

    for(long long i = 0; i < n; i++){
        long long a; cin >> a;

        menorcompra = min(menorcompra,a);

        maiorlucro = max(maiorlucro,a - menorcompra);
    }
    cout << maiorlucro << "\n";

    return 0;
}
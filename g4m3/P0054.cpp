#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    long long maxvenda = 0;
    long long minpreco = 10 * 10 * 10 *10 *10 *10 *10;

    for(int i =0; i < n; i++){

        long long preco; cin >> preco;

        maxvenda = max(maxvenda,preco - minpreco);

        minpreco = min(minpreco,preco);
        // cout << maxvenda << "\n";
    }
    cout << maxvenda << "\n";
    return 0;
}
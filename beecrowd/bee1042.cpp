#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    ll nus[3];
    ll nuss[3];
    for(int i =0; i < 3; i++){
        cin >> nus[i];
        nuss[i] = nus[i];
    }
    sort(nuss,nuss+3);
    for (int i = 0; i < 3; i++)
    {
        cout << nuss[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << nus[i] << endl;
    }
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t; // Descomente se houver múltiplos casos de teste
    while(t--) {
        solve();
    }
    return 0;
}
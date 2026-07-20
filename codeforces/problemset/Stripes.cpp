#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    bool redu = false;

    for(int i = 0; i < 8; i++){
        string linha;
        cin >> linha;

        if(linha == "RRRRRRRR"){
            redu = true;
        }
    }

    if(redu){
        cout << "R\n";
    }
    else{
        cout << "B\n";
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    unordered_map <string,int> pag;

    for( int i = 0; i < n*m; i++){
        string t; cin >> t;

        pag[t] = i;
    }
    int q; cin >> q;

    while(q--){
        string qq; cin >> qq;

        cout << qq << " " << (pag[qq]/3)+1 << " \n";
    }

    return 0;
}
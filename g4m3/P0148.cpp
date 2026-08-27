#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q; cin >> n >> q;

    vector <int> nis(n+2,0);

    for(int i = 1; i <= n; i++){
        cin >> nis[i];
    }
    vector <int> p(n+2,0);
    int maxp = nis[0];
    for(int i = 1; i <= n; i++){
        maxp = max(nis[i],maxp);

        p[i] = maxp;
        // cout << maxp << "\n";
    }
    vector <int> s(n+2,0);
    int maxs = nis[nis.size()-1];
    for(int i = n; i >= 1; i--){
        maxs = max(nis[i],maxs);

        s[i] = maxs;
        // cout << maxs << "\n";
    }

    while(q--){
        int cidade; cin >> cidade;

        cout << p[cidade-1] + s[cidade+1] << "\n";
    }

    return 0;
}
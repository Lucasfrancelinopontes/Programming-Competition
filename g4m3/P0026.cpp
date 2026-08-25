#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;

    vector <string> s;

    for(int i = 0; i < n; i++){
        string abu; cin >> abu;
        s.push_back(abu);
    }

    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            cout << s[j][i];
        }
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int c, l; cin >> l >> c;

    string m[l+1][c+1];

    int total = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];

            if(m[i][j] == "1"){
                if(m[i][c] != "M"){
                    m[i][c] = "M";
                    total ++;
                }
                if(m[l][j] != "M"){
                    m[l][j] = "M";
                    total++;
                }
            }
            else{
                if(m[i][c] != "M"){
                    m[i][c] = "-";
                }
                if(m[l][j] != "M"){
                    m[l][j] = "-";
                }
            }
        }
    }
    cout << total << "\n";

    for(int i = 0; i < l+1; i++){
        for(int j = 0; j < c+1; j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
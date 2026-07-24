#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int cl; cin >> cl;
    string aba[cl+2];

    aba[0] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    for(int i = 1; i < cl+1; i++){
        string txt; cin >> txt;
        aba[i] = "x"+txt+"X";

    }
    aba[cl+1] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    for(int i = 1; i < cl+1; i++){
        for(int j = 1; j < cl+1; j++){
            int ctd = 0;
            // cout << aba[i][j] << " " << aba[i-1][j] << "\n";
            if(aba[i][j] == '*'){
                cout << "9";
            }else{
                if(aba[i-1][j-1] == '*'){
                    ctd ++;
                }
                if(aba[i-1][j] == '*'){
                    ctd ++;
                }
                if(aba[i-1][j+1] == '*'){
                    ctd ++;
                }
                if(aba[i][j+1] == '*'){
                    ctd ++;
                }
                if(aba[i][j-1] == '*'){
                    ctd ++;
                }
                if(aba[i+1][j+1] == '*'){
                    ctd ++;
                }
                if(aba[i+1][j-1] == '*'){
                    ctd ++;
                }
                if(aba[i+1][j] == '*'){
                    ctd++;
                }
                cout << ctd;
            }
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
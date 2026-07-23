#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s; getline(cin, s);
    bool space = false;

    string r;

    for(int i = 0; i < size(s); i++){
        if(s[i] == 'P'){
            i++;
        }
        
        if(i < size(s)){
            if (s[i] == ' ') {
                if (!space) {       
                    r += s[i];      
                    space = true;   
                }
            } else {
                r += s[i];         
                space = false;      
            }
        }
    }

    cout << r << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}

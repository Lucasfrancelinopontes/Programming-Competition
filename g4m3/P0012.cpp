#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    map <string, int> mls;
    string ml;

    while(cin >> ml){
        if(ml == "FIM"){break;}

        mls[ml]++;

        cout << ml << " " << mls[ml] << "\n";
    }
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string p; cin >> p;

    ll lower = 0;
    ll upper = 0;

    for(int i = 0; i < p.size(); i++){
        if(islower(p[i])){
            lower ++;
        }
        else{
            upper ++;
        }
    }

    if (upper > lower) {

        transform(all(p), p.begin(), ::toupper);
    }
    else {

        transform(all(p), p.begin(), ::tolower);
    }

    cout << p << "\n"; 
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int qtds, vr; cin >> qtds >> vr;

    for(int i = 0; i < qtds; i ++){
        int s; cin >> s;

        if( s <= vr){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
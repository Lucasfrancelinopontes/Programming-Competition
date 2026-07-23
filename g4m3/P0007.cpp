#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int c; cin >> c;
    set <string> p;
    int ta = 0;

    while(c--){
        string f; cin >> f;
        p.insert(f);
        if(size(p) > ta){
            cout << f << "\n";
            ta++;
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
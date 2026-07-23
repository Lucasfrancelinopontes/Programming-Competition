#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int p; cin >> p;
    vector <int> ps(p);

    for(int i = 0; i < p; i ++){
        cin >> ps[i];
    }
    sort(all(ps));

    for(int i = 0; i < p; i++ ){
        cout << ps[i] << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
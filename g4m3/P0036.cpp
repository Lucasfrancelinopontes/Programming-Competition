#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string x; cin >> x;
    string newx;

    for(int i = 0; i < x.size(); i++){
        x[i] = tolower(x[i]);
    }
    for(int i = 0; i < x.size(); i++){
        x[i] = toupper(x[i]);
        newx = x.substr(0,i) + x[i] + x.substr(i+1);
        cout << newx << "\n";
        x[i] = tolower(x[i]);
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
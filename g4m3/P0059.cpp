#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s; cin >> s;

    if(s.find("oO") != string::npos || s.find("Oo") != string::npos){
        cout << "YES\n"; 
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
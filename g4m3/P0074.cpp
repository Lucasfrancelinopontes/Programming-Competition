#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    bool d = false;

    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            d = true;
            break;
        }
    }

    if(d){
        cout << s << " YES\n";
    }
    else{
        cout << s << " NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
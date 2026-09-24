#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;
    set <string> st;
    ll tm = 0;

    while(n--){
        string s; cin >> s;
        tm = st.size();
        st.insert(s);
        if(tm == st.size()){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
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
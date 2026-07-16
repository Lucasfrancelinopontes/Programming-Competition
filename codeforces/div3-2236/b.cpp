#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << ' = ' << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

int main(){

    fastIO
    ll t;
    cin>>t;
    for (ll p = 0; p < t; p++) {
        ll n, k; string s;
        cin>>n>>k>>s;
    
        for (ll i = 0; i < n-k; i++) {
            if (s[i] == s[i+k] && s[i] == '1' ){
                s[i] = 0;
                s[i+k] = 0;
            }
        }
    
        bool ans = true;
    
        for (ll i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans = false;
            }
        }
    
        if (ans)cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }


return 0;
}
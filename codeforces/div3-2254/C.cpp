#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;
    string a,b; cin >> a >> b;

    ll ea = 0; ll oa = 0;
    ll eb = 0; ll ob = 0;

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            if(a[i] == '1'){
                ea ++;
            }
            if(b[i] == '1'){
                eb ++;
            }
        }
        else{
            if(a[i] == '1'){
                oa ++;
            }
            if(b[i] == '1'){
                ob ++;
            }
        }
    }

    if(ea == eb && oa == ob){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
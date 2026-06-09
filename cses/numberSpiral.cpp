#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << ' = ' << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

void solve(){
    
    ll x,y; cin >> y >> x;

    ll z = max(y,x);
    ll r;

    if(z % 2 == 0){
        if(y == z){
            r = z*z -x+1;
        }
        else{
            r=(z-1)*(z-1)+y;
        }
    }
    else{
        if(x==z){
            r=z*z-y+1;
        }
        else{
            r=(z-1)*(z-1)+x;
        }
    }
    cout << r << endl;

}
int main(){
    fastIO

    int t; cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
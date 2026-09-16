#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

void solve() {
    int tt; cin >> tt;

    for(int i = 0; i < tt; i++){
        int a,b,c,d,e,f,g,h; cin >> a>>b>>c>>d>>e>>f>>g>>h;

        int x = min(a,min(b,c));
        int y = d;
        int z = max(e,max(g,max(f,h)));
        if(y == 1){
            y=0;
        }
        else{
            y=1;
        }
        z = min(y,z);
        if(x == 1){
            x = 0;
        }
        else{
            x = 1;
        }
        if(z == 1){
            z = 0;
        }
        else{
            z = 1;
        }
        x = max(x,y);
        if(x == 1){
            x = 0;
        }
        else{
            x = 1;
        }

        cout << "Caso " << i+1 << ": " << x << " " << y << " " << z << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
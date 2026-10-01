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
    ll l,c; cin >> l >> c;
    ll m[l+2][c+2];
    memset(m,0,sizeof(m));
    ll x,y;
    ll maior = 0;

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            cin >> m[i][j];
            if(m[i][j] == 0){
                x = i;
                y = j;
            }
        }
    }
    maior = max(m[x-1][y],max(m[x+1][y],max(m[x][y-1],m[x][y+1])));

    cout << maior;
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
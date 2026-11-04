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
    ll n; cin >> n;
    ll e = 0;
    ll o = 0;
    ll p = 0;
    ll ng = 0;

    while(n--){
        ll v; cin >> v;

        if(!v){
            e++;
            continue;
        }
        if(v < 0){
            ng++;
        }
        else{
            p++;
        }
        if(v&1){
            o++;
        }
        else{
            e++;
        }
    }
    cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << ng << "\n";
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
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
    ll odds = 0;

    vector <ll> odilon(25);

    for(int i = 0; i <25; i++){
        cin >> odilon[i];

        if(odilon[i]&1){
            odds++;
        }
    }
    bool ok = false;
    for(int i = 5; i <=21; i += 2){
        if(odds == i){
            ok = true;
        }
    }

    if(ok || odds == 25){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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
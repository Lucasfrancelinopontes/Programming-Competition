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
    vector <bool> tf (INF,false);
    vll abu (n);
    int ctd = 0;
    cin >> abu[0];
    for(int i = 1; i < n; i++){
        cin >> abu[i];
        tf[abu[i-1]+abu[i]] = true;
        abu[i] = abu[i-1]+abu[i];

        if(tf[abu[i]] != false){
            ctd++;
        }
    }

    cout << ctd << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
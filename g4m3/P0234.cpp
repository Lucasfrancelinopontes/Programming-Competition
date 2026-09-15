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
    int n, k; 
    cin >> n >> k;

    int par = 0;
    int impar = 0;

    for(int i = 0; i < n; i++){
        int v; 
        cin >> v;

        if(v & 1){
            impar++;
        } else {
            par++;
        }
    }

    // A diferença absoluta inicial
    int diff = abs(impar - par);

    if (diff <= 1 || (diff - 1 <= k)) {
        cout << "YES\n";
    } else {
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
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
    ll n,k; cin >> n >> k;if(!((n-(k-1)*2)&1) && (n-(k-1)*2) > 0){cout << "YES\n";for(int i = 0; i < k-1; i++){cout << "2" << " ";}cout << (n-(k-1)*2) << "\n";}else if(((n-k+1)&1) && (n-k+1) > 0){cout << "YES\n";for(int i = 0; i < k-1; i++){cout << "1" << " ";}cout << (n-k+1) << "\n";}else{cout << "NO\n";}
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
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

    vector<ll> moedas(n);
    ll soma_total = 0;

    for(ll i = 0; i < n; i++){
        cin >> moedas[i];
        soma_total += moedas[i];
    }

    sort(rall(moedas)); 

    ll minha_soma = 0;
    ll ans = 0;

    for(ll i = 0; i < n; i++){
        minha_soma += moedas[i];
        
        if(minha_soma > soma_total - minha_soma){
            // cout << soma_total - minha_soma << "  " << soma_total << "    " << minha_soma << "\n";
            ans = i + 1;
            break;
        }
    }

    cout << ans << "\n";
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
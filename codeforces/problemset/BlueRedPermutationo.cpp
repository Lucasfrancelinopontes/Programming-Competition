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
    vector <ll> red;
    vector <ll> blue;
    vector <ll> vl(n);

    for(ll i = 0; i < n; i++){
        cin >> vl[i];
    }
    string color; cin >> color;
    for(ll i = 0; i < n; i++){
        if(color[i] == 'R'){
            red.push_back(vl[i]);
        }
        else{
            blue.push_back(vl[i]);
        }
    }
    
    sort(all(red));
    sort(all(blue));

    bool ok = true;

    for(int i = 0; i < sz(blue); i++){
        if(blue[i] < i + 1){
            ok = false;
            break;
        }
    }

    int offset = sz(blue);
    for(int i = 0; i < sz(red); i++){
        if(red[i] > offset + i + 1){
            ok = false;
            break;
        }
    }

    if(ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
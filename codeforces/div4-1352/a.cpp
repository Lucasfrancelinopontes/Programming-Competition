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
    string n; cin >> n;
    long long ctd = 0;
    vll valores;

    for(int i = 0; i < n.size(); i++){
        string abu = "0";
        abu+=n[i];
        ll aba = pow(10,n.size()-i-1);
        if(n[i] != '0'){
            valores.push_back((stoll(abu))*aba);  
            ctd++;
        }
        aba =1;
    }
    cout << ctd << "\n";
    for(ll v : valores){
        cout << v << " ";
    }
    cout << "\n";
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
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

vector <ll> primos;


void gerarPrimos(){
    primos.push_back(2);
    for(ll n = 2; n <= 10001; n++){
        bool prime = true;
    
        for(ll i = 2; i < sqrt(n)+1; i++){
            if(n%i == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            primos.push_back(n);
        }
    }
}

void solve() {
    ll v; cin >> v;
    gerarPrimos();

    for(int i = 0; i < 10001; i++){
        if(primos[i] <= v){
            cout << primos[i] << " ";
        }
        else{
            break;
        }
    }
    cout << "\n";
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
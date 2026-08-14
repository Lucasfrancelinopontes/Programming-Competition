#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int solve(vector <ll> ps) {
    ll a,b; cin >> a >>b;
    int r = 0;

    for( ll p : ps){
        if(p >= a && p <= b){
            r ++;
        }
    }

    cout << r << "\n";
    return 0;
}

int main() {
    fastio;
    ll v = 0;
    ll c = 0;
    vector <ll> ps;

    while(v <= pow(10,18)){
        v = pow(2,c);
        ps.push_back(v);
        c++;
    }
    int t = 1;
    cin >> t;
    while(t--) solve(ps);
    return 0;
}
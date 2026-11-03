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
    double x; cin >> x;

    if(x >= 0 && x <= 25){
        cout << "Interval [0,25]\n";
    }
    else if(x > 25 && x <= 50){
        cout << "Interval (25,50]\n";
    }
    else if(x > 50 && x <= 75){
        cout << "Interval (50,75]\n";
    }
    else if(x > 75 && x <= 100){
        cout << "Interval (75,100]\n";
    }
    else{
        cout << "Out of Intervals\n";
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
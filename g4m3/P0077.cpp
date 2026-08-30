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
    vi abu(3);

    cin >> abu[0] >> abu[1] >> abu[2];

    int trocas = 0;

    if(abu[0] > abu[1]){
        trocas ++;
        swap(abu[0],abu[1]);
    }
    if(abu[1] > abu[2]){
        trocas ++;
        swap(abu[1],abu[2]);
    }
    if(abu[0] > abu[1]){
        trocas ++;
        swap(abu[0],abu[1]);
    }
    cout << trocas << "\n";

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
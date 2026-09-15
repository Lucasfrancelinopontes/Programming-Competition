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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string x; cin >> x;
        
        int tam = x.size();
        vector<string> r;
        for (int m = 0; m < x.size(); m++) {
            tam--;
            char j = x[m];

            if (j == '0') {
                continue;
            }

            string n1 = "";
            n1 += j;

            for (int k = 0; k < tam; k++) n1 += '0';

            r.push_back(n1);
        }

        cout << r.size() << '\n';
        for (auto p : r) cout << p << ' ';
        cout << '\n';
    }

    return 0;
}
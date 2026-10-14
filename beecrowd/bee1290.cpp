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
    int n, m;
    while (cin >> n >> m && n != 0) {
        int x, y, z;
        cin >> x >> y >> z;
        vi item = {x, y, z};
        sort(all(item)); 
        
        int item_vol = item[0] * item[1] * item[2];
        
        map<vi, int> freq; 
        
        for (int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            vi box = {a, b, c};
            sort(all(box)); 
            
            if (box[0] >= item[0] && box[1] >= item[1] && box[2] >= item[2]) {
                freq[box]++;
            }
        }
        
        int min_diff = INF;
        
        for (auto& [box, count] : freq) {
            if (count >= n) {
                int box_vol = box[0] * box[1] * box[2];
                min_diff = min(min_diff, box_vol - item_vol);
            }
        }
        
        if (min_diff == INF) {
            cout << "impossible\n";
        } else {
            cout << min_diff << "\n";
        }
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
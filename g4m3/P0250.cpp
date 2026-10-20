#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    if (!(cin >> N)) return;
    vector<pair<ll, ll>> rays(N);
    for (int i = 0; i < N; i++) {
        cin >> rays[i].first >> rays[i].second;
    }
    int Q;
    cin >> Q;
    for (int q = 0; q < Q; q++) {
        ll x;
        int k;
        cin >> x >> k;

        int pos = lower_bound(rays.begin(), rays.end(), make_pair(x, 0LL)) - rays.begin();
        int left_rays = pos;
        int right_rays = N - pos;
        
        ll target_b_min = -1;
        
        if (k > left_rays && k > right_rays) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        if (k <= right_rays) {
            ll l_b, r_b;
            if (pos + k - 1 >= 0 && pos + k - 1 < N) {
                l_b = rays[pos + k - 1].second + 1;
            } else {
                l_b = 1;
            }
            if (pos + k < N) {
                r_b = rays[pos + k].second - 1;
            } else {
                r_b = 1000000000LL;
            }
            
            if (l_b <= r_b) {
                target_b_min = l_b;
            }
        }
        
        if (k <= left_rays) {
            ll l_b, r_b;
            if (pos - k - 1 >= 0) {
                l_b = rays[pos - k - 1].second + 1;
            } else {
                l_b = 1;
            }
            if (pos - k >= 0 && pos - k < N) {
                r_b = rays[pos - k].second - 1;
            } else {
                r_b = 1000000000LL;
            }
            
            if (l_b <= r_b) {
                if (target_b_min == -1 || l_b < target_b_min) {
                    target_b_min = l_b;
                }
            }
        }
        
        if (target_b_min != -1) {
            cout << target_b_min << "\n";
        } else {
            cout << "IMPOSSIBLE\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    while (T--) {
        solve();
    }

    return 0;
}
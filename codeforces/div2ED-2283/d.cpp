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
    int n;
    cin >> n;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    if (n % 2 == 0) {
        cout << n + 1 << '\n';
        return;
    }

    auto hasGray = [&](int removed, int sum, int first, int last) {
        vector<int> component(n + 1, -1);
        int id = 0;

        for (int start = 1; start <= n; ++start) {
            if (start == removed || component[start] != -1) continue;

            stack<int> st;
            st.push(start);
            component[start] = id;
            while (!st.empty()) {
                int u = st.top();
                st.pop();
                for (int v : graph[u]) {
                    if (v != removed && component[v] == -1) {
                        component[v] = id;
                        st.push(v);
                    }
                }
            }
            ++id;
        }

        for (int i = first; i <= last; ++i) {
            int j = sum - i;
            if (component[i] != component[j]) return true;
        }
        return false;
    };

    int middle = (n + 1) / 2;
    if (hasGray(n, n, 1, (n - 1) / 2)) {
        cout << n << '\n';
    } else if (hasGray(middle, n + 1, 1, (n - 1) / 2)) {
        cout << n + 1 << '\n';
    } else if (hasGray(1, n + 2, 2, (n + 1) / 2)) {
        cout << n + 2 << '\n';
    } else {
        cout << n << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int noTsts;
    cin >> noTsts;

    while (noTsts--) {
        solve();
    }

    return 0;
}
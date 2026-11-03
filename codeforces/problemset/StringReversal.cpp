#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

//Matheus safado tive que aprender o funcional de feiowick 

struct BIT {
    int n;
    vector<int> tree;
    BIT(int n) : n(n), tree(n + 1, 0) {}

    void add(int i, int delta) {
        for (++i; i <= n; i += i & -i) tree[i] += delta;
    }

    int query(int i) {
        int sum = 0;
        for (++i; i > 0; i -= i & -i) sum += tree[i];
        return sum;
    }

    int query(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }
};

void solve() {
    int n;
    if (!(cin >> n)) return;

    string s;
    cin >> s;

    string r = s;
    reverse(all(r));

    vector<vector<int>> pos(26);
    for (int i = 0; i < n; i++) {
        pos[s[i] - 'a'].push_back(i);
    }

    vector<int> cur_idx(26, 0);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int char_code = r[i] - 'a';
        a[i] = pos[char_code][cur_idx[char_code]++];
    }

    BIT bit(n);
    ll inversions = 0;
    for (int i = 0; i < n; i++) {
        inversions += bit.query(a[i] + 1, n - 1);
        bit.add(a[i], 1);
    }

    cout << inversions << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
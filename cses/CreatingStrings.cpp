#include <bits/stdc++.h>
using namespace std;

string s, cur;
int freq[26];
vector<string> ans;

void bt() {
    if (cur.size() == s.size()) {
        ans.push_back(cur);
        return;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) continue;

        freq[i]--;
        cur += char('a' + i);

        bt();

        cur.pop_back();
        freq[i]++;
    }
}

void solve() {
    cin >> s;

    for (char c : s)
        freq[c - 'a']++;

    bt();

    cout << ans.size() << '\n';

    for (auto &x : ans)
        cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l = 0, ans = 0, qtd = 0;
    string s;
    cin >> n >> s;

    int cnt[26]{};

    for (int r = 0; r < n; r++) {
        if (cnt[s[r] - 'a']++ == 0) qtd++;

        while (qtd > 2) {
            if (--cnt[s[l] - 'a'] == 0) qtd--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans << '\n';
}
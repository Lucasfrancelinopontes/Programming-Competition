#include <bits/stdc++.h>
using namespace std;

void solve() {
    int mnX = 101, mxX = 0;
    int mnY = 101, mxY = 0;

    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;

        mnX = min(mnX, x);
        mxX = max(mxX, x);

        mnY = min(mnY, y);
        mxY = max(mxY, y);
    }

    cout << (mxX - mnX) * (mxY - mnY) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
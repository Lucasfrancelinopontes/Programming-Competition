#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;

        if (x > 17) {
            cout << "GOL\n";
            return 0;
        }
    }

    cout << "LANCE QUE SEGUE\n";
}
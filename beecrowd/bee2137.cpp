#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 0;

    while (cin >> c) {
        vector<int> nuns;

        for (int i = 0; i < c; i++) {
            int l = 0;
            cin >> l;

            nuns.push_back(l);
        }

        sort(nuns.begin(), nuns.end());

        for (int n : nuns) {
            cout << setw(4) << setfill('0') << n << endl;
        }
    }
}
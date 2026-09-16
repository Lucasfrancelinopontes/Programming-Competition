#include <bits/stdc++.h>
using namespace std;

vector<string> gray(int n) {
    if (n == 1)
        return {"0", "1"};

    vector<string> prev = gray(n - 1);
    vector<string> ans;

    for (string s : prev)
        ans.push_back("0" + s);

    for (int i = prev.size() - 1; i >= 0; i--)
        ans.push_back("1" + prev[i]);

    return ans;
}

int main() {
    int n;
    cin >> n;

    for (auto &s : gray(n))
        cout << s << '\n';
}
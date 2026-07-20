#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s; cin >> s;
    set <char> ss;

    for(char c : s){
        ss.insert(c);
    }

    if(size(ss) % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
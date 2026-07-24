#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int c; cin >> c;
    int s;
    vector <int> gfm;

    while (cin >> s)
    {
        if(gfm.size() == c){break;}

        if(s == 0){
            sort(all(gfm));
            cout << gfm.back() << "\n";
            gfm.pop_back();
        }
        else{
            gfm.push_back(s);
        }
    }
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
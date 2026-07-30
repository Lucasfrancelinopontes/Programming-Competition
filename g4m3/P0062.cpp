#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n; cin >> n;
    bool b = false;

    for(int i = 0; i < n; i++){
        string t; getline(cin,t);

        if(t.find("B") != string::npos){
            b = true;
        }
    }
    if(b){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO\n";
    }
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
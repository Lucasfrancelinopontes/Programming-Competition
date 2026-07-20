#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int c; cin >> c;
    bool r = true;

    vector <int> n(c);

    if(c != 1){
        for( int i = 0; i < c; i++){
            cin >> n[i];
        }
        sort(n.begin(), n.end());

        for( int i = 1; i < c; i++){
            if(n[i-1] == n[i]){
                r = false;
                break;
            }
        }
    }
    else{
        cin >> c;
    }

    if(r){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
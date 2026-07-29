#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll aba; cin >> aba;
    if(aba < 5){
        cout << "Flopou!\n";
    }
    else if(aba < 31){
        cout << "Foi massa!\n";
    }
    else{
        cout << "Foi top demais!\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
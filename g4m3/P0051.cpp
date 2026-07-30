#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll total = 0;
    double n1,n2,n3,n4,n5;

    for(int i = 0; i < 100; i ++){
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        if((n1+n2+n3+n4+n5)/5 >= 700){
            total ++;
        }
    }
    
    cout << total << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
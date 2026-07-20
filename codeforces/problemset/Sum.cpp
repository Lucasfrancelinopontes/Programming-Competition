#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int a,b,c; cin >> a >> b >> c;

    if(a >= b && a >= c){
        if( b + c == a){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else if(b >= a && b >= c){
        if( a + c == b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else if(c >= a && b <= c){
        if( a + b == c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
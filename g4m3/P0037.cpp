#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int a,b,v; cin >> a >>b;v= a+b;

    bool primo = true;

    for (int i = 2; i < v/2; i++)
    {
        if(v % i == 0){
            primo = false;
        }
    }
    if(primo){
        cout << "Xau\n";
    }
    else{
        cout << "Xi\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
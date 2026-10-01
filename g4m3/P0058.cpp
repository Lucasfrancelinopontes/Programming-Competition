#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

bool dentro(ll px, ll py, ll rx1, ll ry1, ll rx2, ll ry2) {
    return (px >= rx1 && px <= rx2 && py >= ry1 && py <= ry2);
}

void solve() {
    ll x[4];
    ll y[4];

    bool colide = false;

    for(int i = 0; i < 4; i++){
        cin >> x[i] >> y[i];
    }

    if (dentro(x[0], y[0], x[2], y[2], x[3], y[3])) colide = true; 
    if (dentro(x[1], y[0], x[2], y[2], x[3], y[3])) colide = true; 
    if (dentro(x[0], y[1], x[2], y[2], x[3], y[3])) colide = true;
    if (dentro(x[1], y[1], x[2], y[2], x[3], y[3])) colide = true; 

    if (dentro(x[2], y[2], x[0], y[0], x[1], y[1])) colide = true; 
    if (dentro(x[3], y[2], x[0], y[0], x[1], y[1])) colide = true; 
    if (dentro(x[2], y[3], x[0], y[0], x[1], y[1])) colide = true; 
    if (dentro(x[3], y[3], x[0], y[0], x[1], y[1])) colide = true; 

    if(colide){
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
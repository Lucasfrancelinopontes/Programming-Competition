#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string ip; cin >> ip;
    ll soma =0;
    int p = 0;
    int inicial = 0;

    for(int i =0;i < ip.size(); i++){
        if(ip[i] == '.' and p <= 3){
            soma += stoi(ip.substr(inicial,i-inicial));
            p++;
            inicial = i+1;
        }
        if(p == 3){
            soma += stoi(ip.substr(inicial));
            break;
        }
    }

    if(soma % 8 != 0){
        cout << "PASS\n";
    }
    else{
        cout << "BLOCK\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n; cin >> n;
    vector <ll> nun(n);
    int seq = 0;
    cin >> nun[0];
    ll diff;
    ll diffT = pow(10,7);

    for(int i = 1; i < n; i++){
        cin >> nun[i];

        diff = abs(nun[i] - nun[i-1]);

        if(diff != diffT){
            seq++;
        }
        diffT = diff;
    }
    if(n == 1){
        cout << "1\n";
    }
    else{
        cout << seq << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
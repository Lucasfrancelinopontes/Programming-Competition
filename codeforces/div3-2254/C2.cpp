#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; cin >> n;
    string a,b; cin >> a >> b;
    vector <int> parO;
    vector <int> imparO;

    vector <int> parD;
    vector <int> imparD;

    ll ea = 0; ll oa = 0;
    ll eb = 0; ll ob = 0;

    ll totalS = 0;

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            if(a[i] == '1'){
                ea ++;
                parO.push_back(i);
            }
            if(b[i] == '1'){
                eb ++;
                parD.push_back(i);
            }
        }
        else{
            if(a[i] == '1'){
                oa ++;
                imparO.push_back(i);
            }
            if(b[i] == '1'){
                ob ++;
                imparD.push_back(i);
            }
        }
    }

    if(ea == eb && oa == ob){
        for(int i = 0; i < parO.size(); i++){
            totalS += abs(parO[i]-parD[i])/2;
        }
        for(int i = 0; i < imparO.size(); i++){
            totalS += abs(imparO[i]-imparD[i])/2;
        }
        cout << totalS << "\n";
    }
    else{
        cout << "-1\n";
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n';
#define dbg(x) cout << #x << ' = ' << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

int main(){

    fastIO
    ll n = 0;
    ll num = 0;
    ll nump = 0;
    cin >> n;
    bool perdido = false;

    vector <ll> ns(n-1);
    for(int i = 0; i < n-1; i ++){
        cin >> ns[i];
    }

    sort(ns.begin(),ns.end());

    for(int i =0;i < size(ns); i++){
        if(abs(nump-ns[i]) != 1){
            cout << ns[i]-1 << endl;
            perdido = true;
        }
        nump = ns[i];
    }
    if(!perdido){
        cout << n << endl;
    }

return 0;
}
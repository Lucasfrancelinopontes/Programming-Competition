#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << ' = ' << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

int main(){

    fastIO
    ll n; cin >> n;
    vector <ll> ctd(n);
    for(int i = 0; i < n; i ++){
        ctd[i] = i;
    }
    vector <ll> l1;
    vector <ll> l2;

    if (n%2 != 0)
    {
        for(int i = 0; i < n; i ++){
            l1.push_back(ctd[i]);
            l2.push_back(ctd[-i + (-1)]);
        }
    }
    for(int num : l1){
        cout << num << endl;
    }
    for(int num : l2){
        cout << num << endl;
    }
    

return 0;
}
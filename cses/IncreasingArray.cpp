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
    ll total = 0;

    vector <ll> v(n); 
    for(int i = 0; i < n; i ++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            total += abs(v[i] - v[i-1]);
            v[i] = v[i-1];
        }
    }
    cout << total << endl;
    

return 0;
}
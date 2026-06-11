#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << ' = ' << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

int main(){

    fastIO
    
    ll n; cin >> n;
    ll x;
    ll ans =1;

    vector <ll> posicao(n+1);
    for(int i = 0; i < n; i++){
        cin >> x;
        posicao[x] = i;
    }
    for(int i = 1; i <=n; i++){
        if(posicao[i] < posicao[i - 1]){
            ans ++;
        }
    }
    cout << ans << endl;
return 0;
}
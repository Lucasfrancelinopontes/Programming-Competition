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

    ll pos = 0;
    ll atk = 0;

    for(int i =1; i <= n; i++){
        pos = (pow(i,2) * (pow(i,2) - 1)) /2;

        if(i >= 3){
            atk = 4*((i-2)*(i-1));

            cout << pos - atk << endl;
        }
        else{
            cout << pos << endl;
        }
    }
    

return 0;
}
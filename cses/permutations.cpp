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

    if(n <= 3 && n > 1){
        cout << "NO SOLUTION";
    }
    else{
        for(int i =2; i <=n; i+=2){
            cout << i << " ";
        }
        for(int i =1; i <=n; i+=2){
            cout << i << " ";
        }
    }
    cout << endl;
return 0;
}
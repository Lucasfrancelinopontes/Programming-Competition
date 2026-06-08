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

    cin >> n;
    if(n==1){
        cout << n;
    }
    else{

        cout << n << " ";
    }

    while (n != 1)
    {
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n*3 +1;
        }
        cout << n;
        cout << " ";
    }
    cout << endl;

return 0;
}
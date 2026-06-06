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
    ll letras = 0;
    ll z =0;
    ll u=0;
    string la = "";
    cin >> letras;

    cin >> la;
    for(char c : la){
        if(c == 'z'){
            z++;
        }
        else if(c == 'n'){
            u++;
        }
    }
    bool primeiro = true;

    while (u--) {
        if (!primeiro) {
            cout << " ";
        }
        cout << "1";
        primeiro = false;
    }
    
    while (z--) {
        if (!primeiro) {
            cout << " ";
        }
        cout << "0";
        primeiro = false;
    }
    
    cout << endl;

return 0;
}
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
    int c = 0;

    cin >> c;
    
    while(c--){
        bool troca = true;
        string a="",b="",c="";

        cin >> a >> b >> c;

        for(int i = 0; i < a.size(); i++){
            if(c[i] != a[i] && c[i] != b[i]){
                troca = false;
                break;
            }
        }
        if( troca){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

return 0;
}
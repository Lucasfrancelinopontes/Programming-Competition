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
    string soma;
    cin >> soma;
    vector <char> n;

    if(size(soma) > 1){
        
        for(int i=0; i<size(soma); i+=2){
            n.push_back(soma[i]);
        }
        sort(n.begin(),n.end());
        for(int i=0; i<size(n); i++){
            if(i == size(n)-1){
                cout << n[i] << endl;
            }
            else{
                cout << n[i] << "+";
            }
        }
    }
    else{
        cout << soma << endl;
    }

return 0;
}
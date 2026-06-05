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
    int k = 0;
    int altura = 0;
    int total = 0;
    int soma = 0;
    cin >> altura;

    vector <int> m;

    for(int i = 0;i < 12; i++){
        cin >> k;
        m.push_back(k);
    }
    sort(m.rbegin(), m.rend());

    for(int i = 0;i < 12; i++){
        if(soma < altura){
            total ++;
            soma += m[i];
        }
        else{
            break;
        }
    }
    if (soma < altura)
    {
        cout << "-1" << endl;
    }
    else{
        cout << total << endl;
    }
    

return 0;
}
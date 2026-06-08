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
    ll max = 0;
    ll ctd = 0;
    string dna = "";
    cin >> dna;
    char odna;

    for(char c : dna){
        if(c == odna){
            ctd ++;
        }
        else{
            ctd = 0;
        }
        if(ctd >= max){
            max = ctd;
        }
        /*cout << c << odna << endl;*/
        odna = c;

    }
    cout << max+1 << endl;

return 0;
}
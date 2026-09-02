#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

void solve() {
    int n; cin >> n;
    int andressa = 0; int bia = 0;
    map <char,int> baralho = {

        {'A',12},
        {'B',97},
        {'C',31},
        {'D',44},
        {'E',16},
        {'F',17},
        {'G',22},
        {'H',87},
        {'I',10},
        {'J',61},
        {'K',70},
        {'L',33},
        {'M',59},
        {'a',2*12},
        {'b',97*2},
        {'c',31*2},
        {'d',44*2},
        {'e',16*2},
        {'f',17*2},
        {'g',22*2},
        {'h',87*2},
        {'i',10*2},
        {'j',61*2},
        {'k',70*2},
        {'l',33*2},
        {'m',2*59}
    };

    string cartas; cin >> cartas;
    char last = 'p';

    for(int i = 0; i < cartas.size(); i++){
        if(i & 1){
            if(cartas[i] == last){
                bia += baralho[cartas[i]]*3;
            }
            else{
                bia += baralho[cartas[i]];
            }
        }
        else{
            if(cartas[i] == last){
                andressa += baralho[cartas[i]]*3;
            }
            else{
                andressa += baralho[cartas[i]];
            }
        }
        last = cartas[i];
    }
    if(andressa >= bia){
        cout << "ANDRESSA\n";
    }
    else{
        cout << "BIA\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
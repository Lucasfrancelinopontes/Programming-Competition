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
    vector <string> tropas(n);
    bool cerco = true;
    

    for(int i = 0; i <n; i++){
        cin >> tropas[i];
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(tropas[i][j] == 'M'){
                if(i > 0 && i < n-1){
                    if(tropas[i-1][j] == '-'){
                        cerco = false;
                    }
                    else if(tropas[i+1][j] == '-'){
                        cerco = false;
                    }
                    if(j > 0){
                        if(tropas[i][j-1] == '-'){
                        cerco = false;
                        }
                    }
                    else if(j < n-1){
                        if(tropas[i][j+1] == '-'){
                        cerco = false;
                        }
                    }
                }
                else{
                    if(j > 0){
                        if(tropas[i][j-1] == '-'){
                        cerco = false;
                        }
                    }
                    else if(j < n-1){
                        if(tropas[i][j+1] == '-'){
                        cerco = false;
                        }
                    }
                    if(i>0){
                        if(tropas[i-1][j] == '-'){
                            cerco = false;
                        }
                    }
                    else if(i<n-1){
                        if(tropas[i+1][j] == '-'){
                            cerco = false;
                        }
                    }
                }
            }
        }
    }
if(cerco){
    cout << "SUCCESS\n";
}else{
    cout << "FAIL\n";
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
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
    string s;
    cin >> s;
    
    int n = sz(s);
    ll max_soma = -1;
    
    // O primeiro corte 'i' deve ser pelo menos 1, e deixar espaço para as outras duas partes
    for (int i = 1; i < n - 1; i++) {
        
        // O segundo corte 'j' começa após o 'i' e deve deixar pelo menos 1 caractere no fim
        for (int j = i + 1; j < n; j++) {
            
            // Extraindo as 3 partes
            string p1 = s.substr(0, i);
            string p2 = s.substr(i, j - i);
            string p3 = s.substr(j); // Até o final
            
            // Convertendo para long long
            ll num1 = stoll(p1);
            ll num2 = stoll(p2);
            ll num3 = stoll(p3);
            
            // Verificando se esta soma é a maior
            ll soma_atual = num1 + num2 + num3;
            max_soma = max(max_soma, soma_atual);
        }
    }
    
    cout << max_soma << "\n";
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
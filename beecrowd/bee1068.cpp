#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve(string t) {
    int balanco = 0;
    bool erro = false;

    for(char c : t){
        if (c == '('){
            balanco ++;
        }
        else if (c == ')'){
            balanco --;
            if( balanco < 0){
                erro = true;
                break;
            }
        }
    }
    if(!erro && balanco == 0){
        cout << "correct" << endl;
    }
    else{
        cout << "incorrect" << endl;
    }
}

int main() {
    fastio;
    string t;
    // cin >> t; // Descomente se houver múltiplos casos de teste
    while(cin >> t) {
        solve(t);
    }
    return 0;
}
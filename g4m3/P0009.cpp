#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    string l;
    int posA = 1;
    int tiro = 0;

    while (cin >> l)
    {
        if(l == string(l.size(),'O')){break;}

        l = "X" + l + "X";

        if(l[posA] == 'X'){
            cout << "Silêncio...\n";
        }
        else{
            if(l[posA-1] == 'O' || l[posA+1] == 'O'){
                if(l[posA-1] == 'O' && l[posA+1] == 'O'){
                    cout << "Tiro de Melão!!!\n";
                    tiro ++;
                }
                else{
                    if(l[posA-1] == 'O'){
                        cout << "Correndo pro esconderijo " << posA-2 << "!\n";
                        posA -=1;
                    }
                    else{
                        cout << "Correndo pro esconderijo " << posA << "!\n";
                        posA +=1;
                    }
                }
            }
            else{
                cout << "Tiro de Melão!!!\n";
                tiro++;
            }
        }
    }
    cout << "Vitória com " << tiro << " melões!\n";
    
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
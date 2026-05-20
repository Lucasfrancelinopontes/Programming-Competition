#include <bits/stdc++.h>

using namespace std;

int main(){
    long long p = 0, n = 0, c = 0;
    bool ganha = true;
    long long anterior = 0;
    cin >> p >> n;
    cin >> c;
    anterior = c;
    for(int i = 1; i < n; i++){
        cin >> c;

        if(abs(c-anterior) > p){
            ganha = false;
        }
        anterior = c;
    }
    if(ganha){
        cout << "YOU WIN" << endl;
    }
    else{
        cout << "GAME OVER" << endl;
    }
}
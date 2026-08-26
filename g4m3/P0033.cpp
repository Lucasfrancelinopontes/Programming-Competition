#include <bits/stdc++.h>

using namespace std;

int main(){

    map <char,int> ps;

    string p; cin >> p;

    for(char c : p){
        ps[c] ++;
    }
    int maior = 0;
    char poder;

    for(auto& [po,va] : ps){
        if(va > maior){
            maior = va;
            poder = po;
        }
    }
    cout << poder << "\n";
    

    return 0;
}
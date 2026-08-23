#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector <int> antenas(n);

    for(int i = 0; i < n; i ++){
        cin >> antenas[i];
    }
    sort(antenas.begin(),antenas.end());
    int dif = abs(antenas[0] - antenas[1]);
    bool f = true;    for(int i = 2; i < n; i ++){
        if(abs(antenas[i-1] - antenas[i]) != dif){
            f = false;
            break;
        }
    }
    if(f){
        cout << "TRUE\n";
    }
    else{
        cout << "FALSE\n";
    }
    return 0;
}
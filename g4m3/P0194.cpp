#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector <string> p(n);
    getline(cin,p[0]);
    for(int i = 0; i < n; i++){
        getline(cin,p[i]);
        // cout << "teste:" << p[i] << "\n";
    }
    for(int i = n-1; i >= 0; i --){
        // cout << "teste:" << p[i];
        for(int j = p[i].size()-1; j >= 0; j --){
            cout << p[i][j];
        }
        cout << "\n";
    }

    return 0;
}
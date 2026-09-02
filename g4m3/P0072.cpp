#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;
    vector <int> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int cont = 0;
    vector <int> sr(n);
    for(int i = n-1; i >= 0; i--){
        if(s[i] < 0){
            cont ++;
        }
        sr[i] = s[i] * pow(-1,cont);
    }
    for(int i = 0; i < n; i++){
        cout << sr[i] << " ";
    }
    cout << "\n";
    return 0;
}
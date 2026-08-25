#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    string s; cin >> s;
    bool segura = false;

    if(n <= 7){
        segura = false;
    }
    else{
        for(char c : s){
            if(c > '0' && c < '9'){
                segura = true;
            }
            else if(c > 'A' && c < 'Z'){
                segura = true;
            }
        }
    }
    if(segura){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }

    return 0;
}
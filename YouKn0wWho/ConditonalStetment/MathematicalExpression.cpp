#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b,o,r; cin >> a >> o >> b >> r >> r;

    if(o == "+"){
        if(stoi(a) + stoi(b) == stoi(r)){
            cout << "Yes\n";
        }
        else{
            cout << stoi(a) + stoi(b) << "\n";
        }
    }
    else if(o == "-"){
        if(stoi(a) - stoi(b) == stoi(r)){
            cout << "Yes\n";
        }
        else{
            cout << stoi(a) - stoi(b) << "\n";
        }
    }
    else if(o == "*"){
        if(stoi(a) * stoi(b) == stoi(r)){
            cout << "Yes\n";
        }
        else{
            cout << stoi(a) * stoi(b) << "\n";
        }
    }
}
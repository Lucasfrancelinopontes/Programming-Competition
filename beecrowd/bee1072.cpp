#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;

    long long in = 0;
    long long out = 0;

    long long valor;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        cin >> valor;

        if(valor >= 10 && valor <= 20){
            in ++;
        }
        else{
            out ++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
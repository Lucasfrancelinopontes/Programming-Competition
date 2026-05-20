#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n = 0;

    int t =0;
    int cont =0;

    cin >> t;

    while(n < 1000){
        cout << "N[" << n << "] = " << cont << endl;
        cont ++;
        n++;
        if( cont == t){
            cont = 0;
        }
    }
}
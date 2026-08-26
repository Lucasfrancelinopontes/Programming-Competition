#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;


    if(round(sqrt(n))*round(sqrt(n)) == n){
        cout << "SIM\n";
    }
    else{
        cout << "NAO\n";
    }

    return 0;
}
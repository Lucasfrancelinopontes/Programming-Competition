#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t =0;
    long long fib[61];
    long long n =0;

    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <=60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> t;


    while(t--){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
}
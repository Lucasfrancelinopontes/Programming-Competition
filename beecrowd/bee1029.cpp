#include <bits/stdc++.h>

using namespace std;

long long ctd = 0;

long long fib(int n){

    ctd++ ;

    if (n == 0)
    {
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    long long soma = fib(n-1) + fib(n-2);

    return soma;
}

int main(){
    long long x = 0;
    long long n = 0;

    cin >> x;

    for(long long i = 0; i < x; i++){
        cin >> n;

        ctd = 0;
        long long result = fib(n);

        cout << "fib(" << n << ") = " << ctd-1 << " calls = " << result << endl;
    }
}
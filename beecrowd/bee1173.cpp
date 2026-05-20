#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x[10];
    long long n = 0;
    
    cin >> n;

    x[0] = n;
    for(int i = 1; i < 10; i++){
        x[i] = x[i-1] *2;
    }
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << x[i] << endl;
    }
}
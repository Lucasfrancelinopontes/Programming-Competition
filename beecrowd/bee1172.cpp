#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x[10];
    long long n = 0;

    for(int i = 0; i < 10; i++){
        cin >> n;
        if(n <= 0){
            x[i] = 1;
        }
        else{
            x[i] = n;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << x[i] << endl;
    }
}
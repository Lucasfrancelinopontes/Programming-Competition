#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    long long tt = 0;
    for(int i = 0; i <5;i++){
        cin >> n;

        if(n % 2 == 0){
            tt ++;
        }
    }
    cout << tt << " valores pares" << endl;
}
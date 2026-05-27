#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n = 0;
    long long x = 0;

    cin >> n;

    for(long long i =0; i < n; i++){
        cin >> x;
        
        unsigned long long peso = 0;

        if(x == 64){
            unsigned long long graos = pow(2,62);
            peso = graos / 3000;
        }
        else{
            unsigned long long graos = pow(2,x);
            peso = graos / 12000;
        }

        cout << peso << " kg" << endl;
    }
}
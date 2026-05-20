#include <bits/stdc++.h>

using namespace std;

int main(){
    double x[100];
    double n = 0;
    
    for(int i = 0; i < 100; i++){
        cin >> n;
        x[i] = n;
    }
    for(int i = 0; i < 100; i++){
        if(x[i] <= 10){
            cout << fixed << setprecision(1) << "A[" << i << "] = " << x[i] << endl;
        }
    }
}
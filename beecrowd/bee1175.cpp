#include <bits/stdc++.h>

using namespace std;

int main(){
    double x[20];
    double n = 0;
    
    for(int i = 19; i >= 0; i--){
        cin >> n;
        x[i] = n;
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << x[i] << endl;
    }
}
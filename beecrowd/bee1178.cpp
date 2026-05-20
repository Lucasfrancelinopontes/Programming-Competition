#include <bits/stdc++.h>

using namespace std;

int main(){

    double x = 0;

    cin >> x;
    double div = x;

    for(int i = 0; i < 100; i++){
        cout << fixed << setprecision(4) << "N[" << i << "] = " << div << endl;
        div = div/2;
    }

    return 0;
}
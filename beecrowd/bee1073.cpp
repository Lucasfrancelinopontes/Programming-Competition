#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 2; i<=n; i+=2){
        cout << fixed << setprecision(0) << i << "^2 = " << pow(i,2) << endl;
    }
}
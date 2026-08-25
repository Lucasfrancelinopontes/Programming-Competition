#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    int max = -201;
    int a; cin >> a;
    for(int i = 1; i < n; i++){
        int b; cin >> b;

        if(a+b > max){
            max = a+b;
        }
        // cout << max << "\n";

        a = b;
    }

    cout << max << "\n";

    return 0;
}
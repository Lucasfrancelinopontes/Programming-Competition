#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int nn = n;
    int total = 0;

    while(n--){
        int x; cin >> x;
        total += x;
    }

    cout << total - nn << " " << total << "\n";

    return 0;
}
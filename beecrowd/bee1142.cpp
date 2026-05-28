#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n = 0;

    cin >> n;
    
    for(long long j = 1; j <= 4*n; j += 4){
        cout << j << " " << j+1 << " " << j+2 << " PUM" << endl;
    }
    return 0;
}
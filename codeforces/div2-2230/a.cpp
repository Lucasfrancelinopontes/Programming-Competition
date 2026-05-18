#include <bits/stdc++.h>

using namespace std;

int main(){
    int t =0;
    long long n=0,a=0,b=0;
    long long total =0;

    cin >> t;
    while(t--){
        cin >> n >> a >> b;

        long long gpc = n/3;
        long long cg = gpc * min(3 * a, b);

        long long resto = n % 3;
        long long cr = min(resto *a,b);

        total = cg+cr;

        cout << total << endl;
    }
}
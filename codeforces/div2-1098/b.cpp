#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t = 0;
    long long n,x1,x2,k;
    cin >> t;

    while(t--){
        n=0,x1=0,x2=0,k=0;

        cin >> n >> x1 >> x2 >> k;
        if(n <= 3){
            cout << 1 << endl;
        }
        else{
            cout << min(llabs(x1-x2),n-llabs(x1-x2)) + k << endl;
        }
        }
    return 0;
}
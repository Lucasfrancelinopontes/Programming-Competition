#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    double v1,v2,v3;
    double media = 0;

    for(int i = 1; i <= n; i++){
        cin >> v1 >> v2 >> v3;

        media = (v1*0.2)+(v2*0.3)+(v3*0.5);

        cout << fixed << setprecision(1) << media << endl;
    }
}
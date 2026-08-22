#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t = 0;

    for(int i = 0; i < 32; i++){
        int h,m,s; 
        char k,kk;

        cin >> h >> k >> m >> kk >> s;

        if(h >= 24 || m >= 60 || s >= 60){continue;}
        if(h >= 22 || h < 6){
            t++;
        }
    }
    cout << t << "\n";

    return 0;
}
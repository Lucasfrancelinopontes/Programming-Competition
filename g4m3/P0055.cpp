#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    if(n%2 == 0){
        for(int i = n+1; i < n*2; i +=2){
            cout << i << "\n";
        }
    }
    else{
        for(int i = n; i < n*2; i +=2){
            cout << i << "\n";
        }
    }


    return 0;
}
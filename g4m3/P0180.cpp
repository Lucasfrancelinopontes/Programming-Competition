#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;

    vector < long long > abu(n);
    vector <long long> fe;

    for(int i = 0; i < n; i++){
        cin >> abu[i];
    }
    for(int i = 0; i < n-1; i++){
        if(abu[i] > abu.back()){
            fe.push_back(abu[i]);
        }
    }
    for( int i = 0; i < fe.size(); i++){
        cout << fe[i] << "\n";
    }
    return 0 ;
}
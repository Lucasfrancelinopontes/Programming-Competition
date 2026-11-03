#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <long long> a(3);
    vector <long long> b;

    for(int i = 0; i <3; i++){
        cin >> a[i];
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    for(int i = 0; i <3; i++){
        cout << b[i] << "\n";
    }
    cout << "\n";
    for(int i = 0; i <3; i++){
        cout << a[i] << "\n";
    }
}
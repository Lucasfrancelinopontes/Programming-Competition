#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n = 0;
    long long v = 0;
    cin >> n;
    vector<long long> m;
    vector<long long> r;
    for(int i = 1; i <= n; i++){
        cin >> v;
        m.push_back(v);
    }   
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v;
        r.push_back(v);
    } 
    int ct = 0;
    for(int i = 0; i < size(m); i++){
        if(find(r.begin(), r.end(), m[i]) == r.end()){
            cout << m[i];
            ct ++;
            if(m.size() - r.size() != ct){
                cout << " ";
            }
        }
    } 
    cout << endl;

    return 0;
}
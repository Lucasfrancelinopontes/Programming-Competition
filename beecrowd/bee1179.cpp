#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<long long> par;
    vector<long long> impar;

    long long n = 0;

    for(int i = 1;i <= 15; i++){
        cin >> n;

        if(n%2 == 0){
            par.push_back(n);
        }
        else{
            impar.push_back(n);
        }

        if(par.size() == 5){
            for(int ii = 0; ii < 5; ii++){
                cout << "par[" << ii << "] = " << par[ii] << endl;
            }
            par.clear();
        }
        if(impar.size() == 5){
            for(int ii = 0; ii < 5; ii++){
                cout << "impar[" << ii << "] = " << impar[ii] << endl;
            }
            impar.clear();
        }
    }
    for(int i = 0; i < impar.size(); i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i = 0; i < par.size(); i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
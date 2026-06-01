#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;

    cin >> n;

    for(int i =1; i <= n; i++){
        for(int j = 1; j <=3; j++){
            cout << pow(i,j);
            if(j < 3){
                cout << " ";
            }
        }
        cout << endl;
    }
}
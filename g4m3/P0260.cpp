#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int x1,y1; cin >> x1 >> y1;
    int x2,y2; cin >> x2 >> y2;
    string s; cin >> s;
    int ctd = 0;

    if(y1 != y2){
        cout << "BAD\n";
    }
    else{
        if(x1 > x2){
            for(char c : s){
                if(c == 'E'){
                    ctd ++;
                }
            }
        }
        else if(x2 > x1){
            for(char c : s){
                if(c == 'D'){
                    ctd ++;
                }
            }
        }
        // cout << (abs(x1-x2)) << ctd << "\n";
        if(abs(x1-x2) <= ctd){
            cout << "GOOD\n";
        }
        else{
            cout << "BAD\n";
        }
    }

    return 0;
}
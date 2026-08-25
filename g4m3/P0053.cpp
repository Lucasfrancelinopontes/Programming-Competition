#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    while(n--){
        long long p1 = 0;
        long long p2 = 0;

        string n1,n2; cin >> n1 >> n2;

        for(char c : n1){
            if(c == 'a'){
                p1 += 1;
            }
            if(c == 'e'){
                p1 += 2;
            }
            if(c == 'i'){
                p1 += 3;
            }
            if(c == 'o'){
                p1 += 4;
            }
            if(c == 'u'){
                p1 += 5;
            }
            if(c == 'y'){
                p1 += 100;
            }
        }
        for(char c : n2){
            if(c == 'a'){
                p2 += 1;
            }
            if(c == 'e'){
                p2 += 2;
            }
            if(c == 'i'){
                p2 += 3;
            }
            if(c == 'o'){
                p2 += 4;
            }
            if(c == 'u'){
                p2 += 5;
            }
            if(c == 'y'){
                p2 += 100;
            }
        }
        if(p1 > p2){
            cout << n1 << "\n";
        }
        else if(p2 > p1){
            cout << n2 << "\n";
        }
        else{
            cout << "naruto\n";
        }
    }

    return 0;
}